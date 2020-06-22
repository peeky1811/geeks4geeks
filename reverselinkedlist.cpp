/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Should reverse list and return new head.
Node* reverseList(Node *head)
{
  // Your code here
  Node *current, *prev, *next;
  //for head node, prev node is NULL when reversed
  prev=NULL;
  current=head;
  while(current!=NULL){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
  }
  head=prev;
  return head;
}

