#include<stdio.h>
#include<conio.h>
int min(int a,int b)
{
return a<b?a:b;
}
void floyd(int n,int cost[10][10],int d[10][10])
{
int i,j,k;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		d[i][j]=cost[i][j];
	}
}
for(k=0;k<n;k++)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		}
	}
}
}

void read_adjacency_matrix(int n,int a[10][10])
{
int i,j;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
}
void write_matrix(int n,int a[10][10])
{
int i,j;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%5d",a[i][j]);
	}
	printf("\n");
}
}

void main()
{
int n,cost[10][10],d[10][10];
clrscr();
printf("Enter the number of nodes\n");
scanf("%d",&n);
printf("enter the cost adjacency matrix\n");
read_adjacency_matrix(n,cost);
floyd(n,cost,d);
printf("solution to all pairs shortest path problem is\n");
write_matrix(n,d);
getch();
}