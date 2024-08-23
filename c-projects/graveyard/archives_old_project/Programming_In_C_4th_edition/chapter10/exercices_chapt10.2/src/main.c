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

} Node;

typedef struct Head {
  int value;
  struct Node *next;

} Head;

typedef struct Linked_list {
  Head head;
} Linked_list;

void listNodeInsert(Linked_list *link_l, Node *n);
void listNodeRemove(Linked_list *link_l, Node n, size_t index);
Node *listNodeRetreive(Linked_list *link_l, int value);
void listPrint(const Linked_list *ll);
Node *mkNode();

int main() {
  Linked_list myList = {.head.value = 10, .head.next = NULL};
  size_t numberOfNode = 0;
  printf("How many node do you want?\n");
  scanf("%zu",&numberOfNode);
  Node *n;
  
  while (numberOfNode != 0){
    n = mkNode();
    listNodeInsert(&myList, n);
    numberOfNode--;
  }
  listPrint(&myList);

  return EXIT_SUCCESS;
}

Node *mkNode() {
  Node *n = (Node *)malloc(sizeof(Node));
  if (!n)
    return NULL;
  puts("Enter node value :\n");
  scanf(" %d", &n->value);
  n->next = NULL;
  return (n);
}

void listNodeInsert(Linked_list *link_l, Node *n) {
  if (link_l->head.next == NULL) {
    link_l->head.next = n;
    n->next = NULL;
    return;
  }

  Node *temp = link_l->head.next;
  for (; temp->next != NULL;) {
    temp = temp->next;
  }
  temp->next = n;
  n->next = NULL;
}

void listNodeRemove(Linked_list *link_l, Node n, size_t index);

Node *listNodeRetreive(Linked_list *link_l, int value);

void listPrint(const Linked_list *ll) {
  Node *p = ll->head.next;
  printf("%d\n", ll->head.value);
  while (p) {
    printf("%d\n", p->value);
    p = p->next;
  }
}
