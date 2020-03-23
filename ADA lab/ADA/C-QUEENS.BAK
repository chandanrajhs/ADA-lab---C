#include<stdio.h>
#include<conio.h>
#include<math.h>
int x[20],count=1;
void queens(int,int);

void main()
{
int n,k=1;
clrscr();
printf("Enter the number of queens to be placed:");
scanf("%d",&n);
queens(k,n);
getch();
}

void queens(int k,int n)
{
int i,j;
for(j=1;j<=n;j++)
{
	if(place(k,j))
	{
		x[k]=j;
		if(k==n)
		{
			printf("%d solution\n",count);
			count++;
			for(i=1;i<=n;i++)
				printf("%d row <-> %d column\n",i,x[i]);
		}
		else
			queens(k+1,n);
	}
}
}

int place(int k,int j)
{
int i;
for(i=0;i<k;i++)
{
	if((x[i]==j) || (abs(x[i]-j)==abs(i-k)))
		return 0;
}
return 1;
}
