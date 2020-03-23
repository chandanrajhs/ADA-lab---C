#include<stdio.h>
#include<conio.h>
int v[20][20];

int max(int a,int b)
{
	return(a>b)?a:b;
}

void main()
{
int i,j,p[20],w[20],n,m;
clrscr();
printf("enter the number of items\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("Enter the weight and profit of the item %d:\n",i);
	scanf("%d%d",&w[i],&p[i]);
}
printf("Enter the capacity of the knapsack:");
scanf("%d",&m);
for(i=1;i<=n;i++)
{
	v[i][0]=0;
}
for(j=1;j<=m;j++)
{
	v[0][j]=0;
}
for(i=1;i<=n;i++)
{
	for(j=1;j<=m;j++)
	{
	if(w[i]>j)
		v[i][j]=v[i-1][j];
	else
		v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
	}
}
printf("table is\n");
for(i=0;i<=n;i++)
{
	for(j=0;j<=m;j++)
	{
		printf("%d\t",v[i][j]);
	}
	printf("\n");
}
printf("the maximum profit is: %d\n",v[n][m]);
printf("most valuable subset is:{");
j=m;
for(i=1;i<=n;i++)
{
	if(v[i][j]!=v[i-1][j])
	{
		printf("item %d  ",i);
		j=j-w[i];
	}
}
printf("}");
getch();
}