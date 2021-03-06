#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);

void main()
{
	int a[50],n,i;
	clock_t s,e;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100+1;
		printf("%d\n",a[i]);
	}
	s=clock();
	delay(100);
	quick_sort(a,0,n-1);
	e=clock();
	printf("Array after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Time taken: %f",(e-s)/CLK_TCK);
	getch();
}

void quick_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=partition(a,low,high);
		quick_sort(a,low,mid-1);
		quick_sort(a,mid+1,high);
	}
}

int partition(int a[],int low,int high)
{
	int i,j,temp,key;
	key=a[low];
	i=low+1;
	j=high;
	while(1)
	{
		while(key>=a[i] && i<high)
			i++;
		while(key<a[j])
			j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			temp=a[low];
			a[low]=a[j];
			a[j]=temp;
			return j;
		}
	}
}

