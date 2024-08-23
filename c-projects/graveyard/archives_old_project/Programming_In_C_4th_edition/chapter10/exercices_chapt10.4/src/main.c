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
  
  printf("How many node do you want?\n");
  scanf("%zu",&numberOfNode);
  
  while (numberOfNode != 0){
    n = mkNode();
    listNodeInsert(&myList, n, i-1);
    numberOfNode--;
    i++;
  }
  listPrint(&myList);
  printf("Specify indes of node to remove?\n");
  scanf("%zu",&index);
  n  = &myList.head;
  for( i = 0; i < index; i++){
    n = n->next;
  }
  
  listNodeRemove(&myList,n);
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

void listNodeRemove(Linked_list *ll, Node* n){
  if( n->value == ll->head.value && n->next == ll->head.next){
    Node* temp = ll->head.next;
    ll->head.value = temp->value; 
    ll->head.next = temp->next;
    return; 
  }
  Node *temp = ll->head.next;
  for (; temp; temp = temp->next){
    if(temp->next == n){
      temp->next = (n->next == NULL ? NULL : n->next);
      free(n);
    }
  }
}

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
