/* Link list node */
struct Node
{
    int data;
    Node* next;
    Node(int x) {
    data = x;
    next = NULL;
    }
}; 

// head : reference to head of linked list
int getCount(struct Node* head){

    Node* temp=head;
    int ctr=0;
    while(temp!=NULL){
        ctr++;
        temp=temp->next;
    }
    return ctr;
}
