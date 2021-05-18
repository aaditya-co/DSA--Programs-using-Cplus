#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};
//Display all data .
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element : "<< ptr->data<<endl;
        ptr = ptr->next;
    }
    cout<<"\n";
}
//delete from first 
struct node *deleteAtFirst(struct node *head){
    struct node *ptr = head;
     
     head = head->next;
     free(ptr);
     return head;

};

//delete element from the middle of linked list.
struct node *deleteFromMiddle(struct node *head,int index){
    struct node *p= head;
    struct node *q= head->next;
   for(int i=0;i < index -1;i++){
       p= p->next;
       q=q->next;
   }
   p->next = q->next;
   free(q);
   return head;
   

};
//delete last element.
struct node *deleteAtEnd(struct node *head){
    struct node *p= head;
    struct node *q= head->next;
    while(q->next != NULL){
        p = p ->next;
        q= q->next;
    }
    p->next = NULL;
    free(q);
    return head;
};

//delete at given value.
struct node *deleteatValue(struct node *head,int value){
    struct node *p= head;
    struct node *q= head->next;
   while(q->data != value && q->next != NULL ){
       p= p->next;
       q=q->next;
   }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }else{
        cout<<"Value not found";
    }
   return head;
};

int main(){
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    //implementing Node By dynamic memory allocation
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    //data and next
    head->data = 12;
    head->next = first;
    first->data = 16;
    first->next = second;
    second->data = 18;
    second->next = third;
    third->data = 20;
    third->next = NULL;

    // traversal(head);
    // head = deleteAtFirst(head);
    // traversal(head);
    // head = deleteFromMiddle(head,2);
    // traversal(head);
    // traversal(head);
    // head = deleteAtEnd(head);
    // traversal(head);
    // head = deleteatValue(head,16);
    // traversal(head);

}