#include<stdio.h>
#include<conio.h>
void warshall(int n,int a[10][10],int p[10][10])
{
int i,j,k;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		p[i][j]=a[i][j];
	}
}
for(k=0;k<n;k++)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(p[i][k]==1 && p[k][j])
			p[i][j]=1;
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
int n,a[10][10],p[10][10];
clrscr();
printf("enter the no. of nodes:\n");
scanf("%d",&n);
printf("enter the cost adjacency matrix\n");
read_adjacency_matrix(n,a);
warshall(n,a,p);
write_matrix(n,p);
getch();
}
