#include<stdio.h>
main()
{
    int a[100],i,n,x, mid,beg,end;
    printf("\n Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        printf("\n Enter element at index %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element you want to search: ");
    scanf("%d",&x);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==x)
        {
            printf("\n Element found at position %d", mid);
            break;
        }
        else if(a[mid]>x)
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    if(beg>end)
        printf("\n Element Not found");
}
