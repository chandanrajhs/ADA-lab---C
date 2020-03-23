#include<stdio.h>
#include<conio.h>
int a[10],d,n,set[10],count=0;
int flag=0;

void main()
{
int i;
clrscr();
printf("Enter the number of elements in the set:");
scanf("%d",&n);
printf("Enter the elements of the set\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("Enter the sum:");
scanf("%d",&d);
printf("The output is:\n");
subset(0,0);
if(flag==0)
	printf("No solution");
getch();
}

int subset(int sum,int i)
{
if(sum==d)
{
	flag=1;
	display(count);
	return;
}
if(sum>d || i>=n) return;
else
{
	set[count]=a[i];
	count++;
	subset(sum+a[i],i+1);
	count--;
	subset(sum,i+1);
}
return;
}

int display(int count)
{
int i;
printf("{");
for(i=0;i<count;i++)
	printf("%d ",set[i]);
printf("}");
return;
}

