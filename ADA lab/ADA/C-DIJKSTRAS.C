#include<stdio.h>
#include<conio.h>

void main()
{
	int n,cost[15][15],i,j,s[15],u,v,w,dist[15],num,min;
	clrscr();
	printf("Enter the vertices\n");
	scanf("%d",&n);
	printf("Enter the cost of the edge\n");
	printf("Enter 999 of the edge is not present for the self loop\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		scanf("%d",&cost[i][j]);
		printf("Enter the source vertex\n");
		scanf("%d",&v);
		for(i=1;i<=n;i++)
		{
			s[i]=0;
			dist[i]=cost[v][i];
		}
		s[v]=1;
		dist[v]=0;
		for(num=2;num<=n-1;num++)
		{
			min=999;
			for(w=1;w<=n;w++)
			if(s[w]==0 && dist[w]<min)
			{
				min=dist[w];
				u=w;
			}
		s[u]=1;
		for(w=1;w<=n;w++)
		{
			if(s[w]==0)
			{
				if(dist[w]>dist[u]+cost[u][w])
					dist[w]=dist[u]+cost[u][w];
			}
		}
	}
	printf("vertex\t desination\t cost\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t%d\t%d\n",v,i,dist[i]);
		getch();
	}
}