#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
void insert();  
void delete();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {           
        printf("\n=================================================================\n");  
        printf("\n1. Insert an element (Push) \n2. Delete an element (POP)\n3. Display the queue\n4. Exit\n");  
        printf("\nEnter your choice : ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nPlease Enter valid choice\n");  
        }  
    }  
}  
void insert()  
{  
    int item;  
    printf("\nEnter the element to add : ");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nQueue is OVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted in queue");  
      
}  
void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nQueue is UNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nValue deleted from queue");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nQueue values are .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\t%d",queue[i]);  
        }     
    }  
}  
