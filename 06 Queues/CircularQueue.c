#include <stdio.h>  
  
# define max 6  
int queue[max];  // array declaration  
int front=-1;  
int rear=-1;  
// function to insert an element in a circular queue  
void insert(int element)  
{  
    if(front==-1 && rear==-1)   // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)  // condition to check queue is full  
    {  
        printf("Queue is overflow.");  
    }  
    else  
    {  
        rear=(rear+1)%max;       // rear is incremented  
        queue[rear]=element;     // assigning a value to the queue at the rear position.  
    }  
}  
  
// function to delete the element from the queue  
int delete()  
{  
    if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        printf("\nQueue is underflow.");  
    }  
 else if(front==rear)  
{  
   printf("\nThe deleted element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe deleted element is %d", queue[front]);  
   front=(front+1)%max;  
}  
}  
// function to display the elements of a queue  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d \t", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
}  
int main()  
{  
    int choice=1,x;   // variables declaration  
      
    while(choice!=4)   // while loop  
    {  
    	printf("\n=================================================================\n");  
	    printf("\n 1: Insert an element");  
	    printf("\n 2: Delete an element");  
	    printf("\n 3: Display the element"); 
		printf("\n 4: Exit");  
	    printf("\nEnter your choice : ");  
	    scanf("%d", &choice);  
      
	    switch(choice)  
	    {  
	          
	        case 1:      
	        	printf("Enter the element which is to be inserted : ");  
	        	scanf("%d", &x);  
	        	insert(x);  
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
	            printf("\nPlease Enter valid choice : "); 
	  
	    }
	}  
    return 0;  
}  
