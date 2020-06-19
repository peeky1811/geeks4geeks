/* Link list node*/
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; 


// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  // Code here
  node* temp=head;
  int ctr=0;
  while(temp!=NULL){
      ctr++;
      if(ctr==index){
        return temp->data;
        break;
      }
      temp=temp->next;
      
  }
}
