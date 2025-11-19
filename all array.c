#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100],i,n,bed;
int x, pos=-1,j,val,temp;
void create();
void display();
void insert();
void del();
void search();
void sort ();
main()
{
    int option;
    do
    {
        printf("\n---------------------------------\n");
        printf("\nOperations on an Array\n");
        printf("\n---------------------------------\n");
        printf("\n 1: Create");
        printf("\n 2: Display");
        printf("\n 3: Insert");
        printf("\n 4: Delete");
        printf("\n 5: Search Element");
        printf("\n 6: Sorting");
        printf("\n 7: Exit\n");
        printf("\n~~~~~~~~~~~~~\n");
        printf("\nEnter your choice: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: create();
                    printf("\n An array is created");
                    break;
            case 2: display();
                    break;
            case 3: insert();
                    break;
            case 4: del();
                    break;
            case 5: search();
                    break;
            case 6: sort();
                    break;
            case 7: exit(0);
                    break;
            default: printf("INVALID CHOICE");
        }
    } while(option!=0);
    printf("\n");
}
void create()
{
    printf("\n Enter the number of elements: ");
    scanf("%d",&n,i=0);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element %d: ",i);
        scanf("%d",&a[i]);
    }
}
void display()
{
    printf("\n The elements are: ");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
}
void insert()
{
    printf("\n Enter the position where element has to be inserted: ");
    scanf("%d",&pos);
    printf("\n Enter the element to be inserted: ");
    scanf("%d",&val);
    if(pos>n)
    {
        printf("\n Invalid choice of position");
    }
    else
    {   if(pos<n)
        {
            for(i=n;i>=pos;i--)
            {
                a[i]=a[i-1];
            }
        }
        a[pos]=val;
        n=n+1;
        printf("\n The elements of the array after insertion are: ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
void del()
{
    printf("\n Enter the position from where element has to be deleted: ");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("\n Invalid choice of position");
    }
    else
    {   if(pos<n)
        {
            for(i=pos;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
        }
        n=n-1;
        printf("\n The elements of the array after deletion are: ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
void search()
{
    printf("\n Enter the element you want to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            pos=i;
            printf("\n Element found at position %d",pos);
            break;
        }
    }
    if(pos==-1)
        printf("\n Element Not found");
}
void sort()
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     printf("\n The elements after sorting are: ");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
}
