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
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

typedef struct Node {

  int value;
  struct Node *next;
  struct Node *prev;

} Node;

typedef struct Linked_list {

  Node head;
  size_t size;

} Linked_list;

void listNodeInsert(Linked_list *link_l, Node *n, size_t at);
void listNodeRemove(Linked_list *ll, Node *n);
Node *listNodeRetreive(Linked_list *link_l, int value);
void listPrint(const Linked_list *ll);
Node *mkNode(void);

int main(void) {

  Linked_list myList = {.head.next = NULL};
  size_t numberOfNode = 0, i = 0, index = 0, rm = 0;
  Node *n;
  char cmd;
  printf("Enter a command : i = insert node : s = search : p = print : d = "
         "delete : q = quit\n");
  do {
    cmd = getchar();

    if (cmd == 'i') {
      puts("How many node do you wish to insert ?\n");
      scanf("%zu", &numberOfNode);

      if (numberOfNode > 1) {
        while (i < numberOfNode) {
          n = mkNode();
          listNodeInsert(&myList, n, myList.size - 1);
          i++;
        }
      } else {
        puts("Where do you want to insert node ?\n");
        scanf(" %zu", &index);
        n = mkNode();
        listNodeInsert(&myList, n, index);
      }
    } else if (cmd == 'p') {
      listPrint(&myList);
    } else if (cmd == 'd') {
      puts("Where do you want to delete node ?\n");
      scanf("%zu", &index);
      listNodeRemove(&myList, listNodeRetreive(&myList, index));
    } else if (cmd == 'q') {
      exit(0);
    }

    printf("Enter a command : i = insert node : s = search : p = print : d = "
           "delete : q = quit\n");
    getchar();
  } while (1);

  return EXIT_SUCCESS;
}

Node *mkNode(void) {
  Node *n = (Node *)malloc(sizeof(Node));
  if (!n)
    return NULL;
  puts("Enter node value :\n");
  scanf(" %d", &n->value);
  n->next = NULL;
  return (n);
}

void listNodeInsert(Linked_list *link_l, Node *n, size_t at) {

  if (link_l->size == 0) {
    link_l->head.value = n->value;
    link_l->head.next = NULL;
    link_l->head.prev = NULL;
    link_l->size = 1;
    return;
  }

  size_t i;
  Node *temp = &link_l->head;
  for (i = 0; temp; i++) {
    if (i == at) {
      n->next = temp->next;
      temp->next = n;
      link_l->size += 1;
    }
    temp = temp->next;
  }
}

void listNodeRemove(Linked_list *ll, Node *n) {
  if (n->value == ll->head.value && n->next == ll->head.next) {
    Node *temp = ll->head.next;
    ll->head.value = temp->value;
    ll->head.next = temp->next;
    return;
  }
  Node *temp = ll->head.next;
  for (; temp; temp = temp->next) {
    if (temp->next == n) {
      temp->next = (n->next == NULL ? NULL : n->next);
      free(n);
    }
  }
}

Node *listNodeRetreive(Linked_list *link_l, int index) {
  Node *temp = &link_l->head;
  if( index == 0 ) return temp;
  size_t i;
  temp = temp->next;
  for (i = 1; temp; temp = temp->next, i++) {
    if (i == index) {
      return temp;
    }
  }
  return NULL;
}

void listPrint(const Linked_list *link_l) {
  Node *p = link_l->head.next;
  if (link_l->size == 0)
    return;
  printf("\n%d\n", link_l->head.value);
  while (p) {
    printf("%d\n", p->value);
    p = p->next;
  }

  printf("\n");
}
