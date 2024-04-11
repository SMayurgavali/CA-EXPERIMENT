#include<stdio.h>
int main()
{
	int a[100],i,n,element,left,right,mid;
	printf("size of array\n");
	scanf("%d",&n);
	printf("elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	left=0;
	right=n-1;
	mid = (left+right)/2;
	printf("...............................\n");
	printf("enter element that we want to search\n");
	scanf("%d",&element);
	if(a[mid]==element)
	{
		printf("%d found at position %d",element,mid);
	}
	else if(a[mid]>element)
	{
		left = mid +1;
	}
	else
	{
		right = mid-1;
	}
	
	return 0;
	}
