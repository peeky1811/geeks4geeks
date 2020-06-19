/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   Node* temp1=head;
   int length=0,ctr,middata=-1;
   while(temp1!=NULL){
       length++;
       temp1=temp1->next;
   }
    //cout<<length<<" ";
   int mid=int(length/2);
   //cout<<mid<<" ";
   Node* temp2=head;
   while(temp2!=NULL){
       if(ctr==mid){
           middata= temp2->data;
           break;
       }
       ctr++;
       temp2=temp2->next;
       
   }
   return middata;
}
