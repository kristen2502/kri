#include <stdio.h>

int main() 
{
    int a[100], i, n, x, pos = -1;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements:\n");
    for(i = 1; i <= n; i++) 
	{
        printf("Enter element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    for(i = 1; i<=n; i++) 
	{
        if(x == a[i]) 
		{
            pos = i; 
            break;
        }
    }

    if(pos != -1)
        printf("\nElement found at position %d\n", pos);
    else
        printf("\nElement not found\n");

    return 0;
}
