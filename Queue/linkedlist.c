#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = NULL;
    int choice;
    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Press 1 for creating another list and 0 for exiting: ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp!=0)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    
    
    return 0;
}