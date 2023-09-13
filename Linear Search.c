#include<stdio.h>
#include<conio.h>
int main()
{
    int num, n;
    printf("\nEnter the number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of Array: \n");
    for(int i=0;i<n;i++)
    {
        printf("\nA[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&num);
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num){
            printf("Item found at position %d !!",i);
            break;
        }
        else {
            f=f+1;
        }
    }
    if(f==n)
    printf("Item not found");
    
    getch();
    return 0;
}