#include<stdio.h>
#include<stdlib.h>

void addEdges(int graph[10][10],int n)
{
	int i,j;
	printf("Enter 1 if edge is present otherwise enter 0");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Edge from %d to %d:",i,j);
			scanf("%d",&graph[i][j]);
		}
	}
	
	printf("\nAdjacency Matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",graph[i][j]);
		}
		printf("\n");
	}
}
int front=-1, rear=-1;
void enque(int queue[], int adjnode, int n)
{
	//printf("\nInside Enque:");
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=adjnode;
//		printf("%d",queue[rear]);
	}
	else if(rear!=n)
	{
		rear++;
		queue[rear]=adjnode;
	//	printf("%d",queue[rear]);
	}
}

int deque(int queue[])
{
//	printf("\nInside Deque:");
	int x=queue[front];
	if(front!=-1)
	{
		front++;
	}
//	printf("%d",x);
	return x;
}

void BFS(int graph[10][10], int queue[],int n)
{
	int start=0;
	int x,i;
	int visited[10]={0};
	enque(queue, start,n);
	visited[start]=1;
	printf("\nBFS TRaversal:");
	while(front!=-1)
	{
		x=deque(queue);
		visited[x]=2;
		printf("%d\t",x);
		for(i=0;i<n;i++)
		{
			if(graph[x][i]==1 && visited[i]==0)
				enque(queue,i,n);
				visited[i]=1;
		}
	}
}




int main()
{
	int n;
	printf("Enter no. of vertices in graph");
	scanf("%d",&n);
	int graph[10][10],queue[n];
	/*int **graph, stack[n];
	graph=(int **)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
		graph[i]=(int *)malloc(n*sizeof(int));
	*/	
	
	addEdges(graph,n);
	BFS(graph,queue, n);
	
	return 0;
}
