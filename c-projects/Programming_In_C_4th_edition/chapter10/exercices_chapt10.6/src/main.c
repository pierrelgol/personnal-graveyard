/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

typedef enum { ASCENDING, DESCENDING } Order;
typedef enum { HEAD, TAIL } Special_t;

typedef struct Data {
  int32_t value;
} Data;

typedef struct Node_t {
  Data d;
  struct Node_t *next;
  struct Node_t *prev;
} Node_t;

typedef Node_t iterateWith_t;

typedef struct Head_t {
  Data d;
  Special_t type;
  struct Node_t *next;
} Head_t;

typedef struct Tail_t {
  Data d;
  Special_t type;
  struct Node_t *prev;
} Tail_t;

typedef struct {
  Head_t head;
  Tail_t tail;
  size_t size;

} DlinkList_t;

typedef void (*sortWith)(DlinkList_t *Dll, Order);

Node_t *Node_tFactory(void);
void Node_tDestructor(Node_t *n);
void DlinkList_tInsert(DlinkList_t *list, Node_t *n);
Node_t *DlinkList_tSearch(DlinkList_t *list, Data search);
void DlinkList_tDelete(Node_t *n);
void DlinkList_tPrint(Node_t *n);
void DlinkList_tSort(Node_t *n, sortWith);

int main(void) {
  DlinkList_t list;
  list.size = 0;

  // Test Node_tFactory
  printf("Creating a new node...\n");
  Node_t *node = Node_tFactory();
  printf("Created node with value: %d\n", node->d.value);

  // Test DlinkList_tInsert
  printf("Inserting node into the list...\n");
  DlinkList_tInsert(&list, node);
  printf("Size of the list: %zu\n", list.size);
  DlinkList_tPrint((Node_t *)&list.head);
  // // Test DlinkList_tSearch
  // printf("Searching for a node with value 5...\n");
  // Data searchData;
  // searchData.value = 5;
  // Node_t *foundNode = DlinkList_tSearch(&list, searchData);
  // if (foundNode) {
  //   printf("Found node with value: %d\n", foundNode->d.value);
  // } else {
  //   printf("Node not found.\n");
  // }

  // // Test DlinkList_tDelete
  // printf("Deleting the node...\n");
  // DlinkList_tDelete(node);
  // printf("Size of the list after deletion: %zu\n", list.size);

  // // Test DlinkList_tPrint
  // printf("Printing the list...\n");
  // DlinkList_tPrint((Node_t *)&list.head);

  // // Test DlinkList_tSort
  // printf("Sorting the list in ascending order...\n");
  // DlinkList_tSort((Node_t *)&list.head, ASCENDING);

  return EXIT_SUCCESS;
}

Node_t *Node_tFactory() {
  Node_t *n = (Node_t *)malloc(sizeof(Node_t));
  if (!n)
    return NULL;
  puts("Enter node value :\n");
  scanf(" %d", &n->d.value);
  n->next = NULL;
  n->prev = NULL;
  return (n);
}

void Node_tDestructor(Node_t *n) {
  if (n)
    free(n);
}
void DlinkList_tInsert(DlinkList_t *list, Node_t *n) {
  if (list->size == 0) {
    list->head.d = n->d;
    list->head.next = (Node_t *)&list->tail;
    list->tail.prev = (Node_t *)&list->head;
    list->size = 1;
    list->head.type = HEAD;
    list->tail.type = TAIL;
  } else {
    n->prev = list->tail.prev;
    n->next = (Node_t *)&list->tail;
  }
}

Node_t *DlinkList_tSearch(DlinkList_t *list, Data search) {
  iterateWith_t *i = (Node_t *)&list->head;
  iterateWith_t *j = (Node_t *)&list->tail;
  while (i->next != j && i->d.value != search.value &&
         j->d.value != search.value) {
    i = i->next;
    j = j->prev;
  }
  return (i->d.value == search.value ? i : j);
}

void DlinkList_tDelete(Node_t *n) {

  if (((Head_t *)(n))->type == HEAD) {
    Head_t *replace = (Head_t *)n;
    replace->type = HEAD;
    free(n);
  } else if (((Tail_t *)(n))->type == TAIL) {
    Tail_t *replace = (Tail_t *)n;
    replace->type = TAIL;
    free(n);
  } else {
    Node_t *NodeN0 = n->prev, *NodeN2 = n->next;
    NodeN0->next = NodeN2;
    NodeN2->prev = NodeN0;
    free(n);
  }
}
void DlinkList_tPrint(Node_t *n) {
  iterateWith_t *i = n;

  for (; ((Tail_t *)i)->type != TAIL; i = i->next) {
    printf("%d, ", i->d.value);
  }
  printf("\n");
}

void DlinkList_tSort(Node_t *n, sortWith);
