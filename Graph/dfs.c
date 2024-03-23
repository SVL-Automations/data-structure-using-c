#include<stdio.h>
#include<stdlib.h>
void addEdges(int graph[][],int n)
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
int top=-1;
void push(int stack[], int adjnode, int n)
{
	if(top!=n)
	{
		top++;
		stack[top]=adjnode;
	}
}

int pop(int stack[])
{
	int x=stack[top];
	if(top!=-1)
	{
		top--;
	}
	return x;
}

void DFS(int graph[][], int stack[],int n)
{
	int start=0;
	int x,i;
	int visited[10]={0};
	push(stack, start,n);
	visited[start]=1;
	printf("\nDFS TRaversal:");
	while(top!=-1)
	{
		x=pop(stack);
		visited[x]=2;
		printf("%d\t",x);
		for(i=0;i<n;i++)
		{
			if(graph[x][i]==1 && visited[i]==0)
				push(stack,i,n);
				visited[i]=1;
		}
	}
}




int main()
{
	int n;
	printf("Enter no. of vertices in graph");
	scanf("%d",&n);
	int graph[n][n],stack[n];
	/*int **graph, stack[n];
	graph=(int **)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
		graph[i]=(int *)malloc(n*sizeof(int));
	*/	
	
	addEdges(graph,n);
	DFS(graph,stack, n);
	
	return 0;
}
