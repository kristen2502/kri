#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i;
	printf("\n enter the number of element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter element %d: ", i+1);
		scanf("%d",&a[i]);
	}
	printf("\n the element are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
