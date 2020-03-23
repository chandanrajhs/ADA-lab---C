#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void simplemerge(int a[20],int low,int mid,int high)
{
	int i,j,k,c[20];
	k=i=low;
	j=mid+1;
	while((i<=mid) && (j<=high))
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(i<=mid)
		c[k++]=a[i++];
	while(j<=high)
		c[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=c[i];
		return;
}
void mergesort(int a[20],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		simplemerge(a,low,mid,high);
	}
}
void main()
{
	int a[20],n,i;
	clock_t start,end;
	clrscr();
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100+1;
		printf("%d\n",a[i]);
	}
	start=clock() ;
	delay(100);
	mergesort(a,0,n-1);
	end=clock();
	printf("the sorted array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("time taken:%f",(end-start)/CLK_TCK);
	getch();
}