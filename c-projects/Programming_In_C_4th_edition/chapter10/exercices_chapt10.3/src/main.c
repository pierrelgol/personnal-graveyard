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


typedef struct Linked_list {
  
  Node head;
  Node hp;
  size_t size;
  size_t current_node_index;
  
} Linked_list;


void listNodeInsert(Linked_list *link_l, Node *n, size_t at);
void listNodeRemove(Linked_list *link_l, Node n, size_t index);
Node *listNodeRetreive(Linked_list *link_l, int value);
void listPrint(const Linked_list *ll);
Node *mkNode(void);


int main(void) {

  Linked_list myList = {.head.next = NULL};
  size_t numberOfNode = 0, i = 0;
  Node *n;
  
  printf("How many node do you want?\n");
  scanf("%zu",&numberOfNode);
  
  while (numberOfNode != 0){
    n = mkNode();
    listNodeInsert(&myList, n, i-1);
    i++;
    numberOfNode--;
  }
  listPrint(&myList);

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

  if ( link_l->size == 0){
    link_l->head.value = n->value;
    link_l->head.next = NULL;
    link_l->size = 1;
    link_l->current_node_index = 0;
    return;
  }
  
  size_t i;
  Node *temp = &link_l->head;
  for( i = 0; temp ; i++ ){
    if ( i == at ){
      n->next = temp->next;
      temp->next = n;
      link_l->size += 1;
    }
    temp = temp->next;
  }
  
}

void listNodeRemove(Linked_list *link_l, Node n, size_t index);

Node *listNodeRetreive(Linked_list *link_l, int value);

void listPrint(const Linked_list *link_l) {
  Node *p = link_l->head.next;
  if(link_l->size == 0) return; 
  printf("\n%d\n", link_l->head.value);
  while (p) {
    printf("%d\n", p->value);
    p = p->next;
  }
  
  printf("\n");
}
