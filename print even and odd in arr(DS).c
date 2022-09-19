#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
 
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter any element in array value %d:",i+1);
    scanf("%d",&arr[i]);
    }
    printf("\nEven numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        printf("%d ",arr[i]);
    }
    printf("\nOdd numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        printf("%d ",arr[i]);
    }
    return 0;
}