#include<stdio.h>
#include<conio.h>
main()
{
	int a[100],i,j,n,temp;
	printf("\n enter the number of elements you want to enter: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
	{
		printf("\n enter element at index %d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n the elements after sorting are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	getch();
}
