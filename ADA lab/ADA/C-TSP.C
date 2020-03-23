#include<stdio.h>
#include<conio.h>
int a[10][10],visited[10],n,cost=0;
void get()
{
int i,j;
printf("Enter number of cities:");
scanf("%d",&n);
printf("Enter cost matrix\n");
for(i=0;i<n;i++)
{
	printf("Enter elements of row %d:\n",i+1);
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
	visited[i]=0;
}
printf("the cost list is:\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
}

void mincost(int city)
{
int i,ncity;
visited[city]=1;
printf("%d->",city+1);
ncity=least(city);
if(ncity==999)
{
	ncity=0;
	printf("%d",ncity+1);
	cost+=a[city][ncity];
	return;
}
mincost(ncity);
}

int least(int c)
{
int i,nc=999;
int min=999,kmin;
for(i=0;i<n;i++)
{
	if((a[c][i]!=0)&&(visited[i]==0))
	{
		if(a[c][i]<min)
		{
			min=a[i][0]+a[c][i];
			kmin=a[c][i];
			nc=i;
		}
	}
}
if(min!=999)
cost+=kmin;
return nc;
}

void main()
{
clrscr();
get();
printf("the path is:\n");
mincost(0);
printf("\nThe minimum cost is:");
printf("%d",cost);
getch();
}


