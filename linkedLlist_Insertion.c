#include <stdio.h>
#include <stdlib.h>

//creating a node.
struct node
{
    int data;
    struct node *next;
};
//Functions to display all the data in Linked List.
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Insert at First Function.
struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//Insert in Between of Two Node Function.
struct node *InsertInBetween(struct node *head, int data,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    int i=0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr ->data = data;
    ptr -> next = p->next;
    p->next=ptr;
    return head;
}
//Insert at End of Linked List Function.
struct node *InsertAtEnd(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while(p->next != NULL){
        p= p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *InsertAfter(struct node *head, struct node * prevNode,int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next = prevNode->next;
    prevNode->next= ptr;
}

//Main Function
int main()
{

    //structing some nodes;
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
    //function call to display all element.
    traversal(head);

    // printf("\nData Inserted At First---------\n");
    // //inserting data at First in linked List.
    // head = InsertAtFirst(head, 10);

    // //Display updated data after insertion.
    // traversal(head);

    // printf("\nData Inserted In Between at Index.---------\n");

    // head= InsertInBetween(head,30,3);
    // traversal(head);

    // printf("\nData Inserted at End.---------\n");

    // head= InsertAtEnd(head,35);
    // traversal(head);


    // printf("\nData Inserted after given node.---------\n");

    // head= InsertAfter(head,first,67);
    // traversal(head);

}