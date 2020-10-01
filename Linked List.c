#include<stdlib.h>
#include <stdio.h>
void create();
void display();
struct Node{
    int data;
    struct Node *next;
}
*Start =NULL;
int main()
{
    printf("This is my first link list program\n");
    while(1)
    {
        int choice;
        printf("\nEnter your choice\n1.For creating\n2.For Displaying\n3.For exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
                    break;
            case 2:display();
                    break;
            case 3:exit(0);
        }
    }


    return 0;
}

void create()
{

    int a;
    do{

        struct Node *current,*newnode;
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter the data to be entered in the node: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(Start==NULL)
        {
            current=newnode;
            Start=newnode;
        }
        else{
            current->next=newnode;
            current=newnode;
        }
        printf("Do you want to continue creating nodes\n1. to continue\n0. to stop: ");
        scanf("%d",&a);
    }
    while(a!=0);
}
void display()
{
    struct Node *temp;
    temp=Start;
    printf("The linked list is: ");
    if(Start==NULL)
    {
        printf("the list is empty\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
