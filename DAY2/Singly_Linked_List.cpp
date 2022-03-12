#include<stdio.h>  
#include<stdlib.h>
#include<malloc.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 4703)
struct node
{
    int data;
    struct node* next;
};
struct node* head, *newnode, *temp;


void InsertBeg()
{    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the date you want to insert\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
 }
void InsertEnd()
{
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the date you want to insert\n");
    scanf("%d", &newnode->data);
    if (newnode == NULL)
        printf("OverFlow\n");
    else
    {
        if (head == NULL)
        {
            newnode->next = NULL;
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }
    }
}
void InsertBetween()
{
    
    int i = 1, pos;
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("overflow\n");
    }
    else
    {   
        printf("\nEnter the position\n");
        scanf("%d", &pos);
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("can't insert\n");
                    return;
            }
            i++;
        }
        printf("\nEnter the data you want to insert\n");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    
}
void DeleteBeg()
{
    if (head == NULL)
    {
        printf("List is Empty\n");
         
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
    }
    
}
void DeleteEnd()
{
    struct node* prevnode = NULL;
  
    if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            prevnode = temp;
            temp = temp->next;
        }
        prevnode->next = NULL;
        free(temp);
    }
}
void DeleteAfer()
{
    struct  node* nextnode = NULL;
    int pos, i;
    temp = head;
    printf("\n Enter the position of the node after which you want to perform deletion \n");
    scanf("%d", &pos);
    for(i =0 ; i<pos; i++)
    {
        nextnode = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nCan't delete");
            return;
        }
       
    }
    
    nextnode->next = temp->next;
    free(temp); 
}
void display()
{
    temp = head;
    if (temp == NULL)
        printf("List is empty\n");
    else
    {
        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int choice = 0;
    while (choice != 8)
    {
        printf("\n1.InsertBeg\n2.InsertEnd\n3.InsertAfter\n4.DeleteBeg\n 5.DeleteEnd\n6.DeleteAfter\n7.Display\n8.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            InsertBeg();
            break;
        case 2:
            InsertEnd();
            break;
        case 3:
            InsertBetween();
            break;
        case 4:
            DeleteBeg();
            break;
        case 5:
            DeleteEnd();
            break;
        case 6:
            DeleteAfer();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
    return 0;
}




