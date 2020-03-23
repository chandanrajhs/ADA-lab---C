#include<stdio.h>
#include<conio.h>
#include<time.h>

void heapcom(int a[],int n)
{
	int i,j,k,item;
	for(k=2;k<=n;k++)
	{
		item=a[k];
		i=k;
		j=i/2;
		while(j!=0 && item>a[j])
		{
			a[i]=a[j];
			i=j;
			j=i/2;
		}
		a[i]=item;
	}
}

void adjust(int a[],int n)
{
	int item,i,j;
	j=1;
	item=a[j];
	i=2*j;
	while(i<n)
	{
		if((i+1)<n)
		{
			if(a[i]<a[i+1])
				i++;
		}
		if(item<a[i])
		{
			a[j]=a[i];
			j=i;
			i=2*j;
		}
		else
			break;
	}
	a[j]=item;
}

void heapsort(int a[],int n)
{
	int i,temp;
	delay(1000);
	heapcom(a,n);
	for(i=n;i>=1;i--)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		adjust(a,i);
	}
}

void main()
{
	int n,i,a[20];
	clock_t start,end;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=1;i<=n;i++)
	{
		a[i]=rand()%100+1;
		printf("%d\n",a[i]);
	}
	start=clock();
	delay(100);
	heapsort(a,n);
	end=clock();
	printf("The elements after sorting\n");
	for(i=1;i<=n;i++)
		printf("%d\n",a[i]);
	printf("time taken:%f",(end-start)/CLK_TCK);
	getch();
}

