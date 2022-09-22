#include<stdio.h>
void Sub_Divide(int array[], int min, int max);
void Merge_Sort(int arrays[], int min, int mid_element, int max);
int main()
{
    int ar[30],a,total;
    printf("Enter number of elements: ");
    scanf("%d",&total);
    printf("\nEnter the elements one by one : \n");
    for(a=1;a<=total;a++)
	{
    	scanf("%d",&ar[a]);
    }
    Sub_Divide(ar,1,total);
    printf("\nThe Sorted elements using merge sort are: \n");
    for(a=1;a<=total;a++)
	{
        printf(" %d ",ar[a]);
    }
    return 0;
}
void Sub_Divide(int array[], int min, int max)
{
    int middle;
    if(min<max)
	{
    	middle=(min+max)/2;
    	Sub_Divide(array, min, middle);
    	Sub_Divide(array, middle+1, max);
    	Merge_Sort(array, min, middle, max);
    }
}

void Merge_Sort(int arrays[], int min, int mid_element, int max)
{
    int a,b,mid,lows,temp_array[30];
    a=min;
    lows=min;
    mid=mid_element+1;
    do 
	{
        if(arrays[lows]<=arrays[mid])
		{
            temp_array[a]=arrays[lows];
            lows++;
        }
        else 
		{
            temp_array[a]=arrays[mid];
        	mid++;
        }
        a++;
    }
    while((lows<=mid_element)&&(mid<=max));
    if(lows>mid_element)
	{
        for(b=mid;b<=max;b++)
		{
        	temp_array[a]=arrays[b];
        	a++;
        }
    }
    else
	{
        for(b=lows;b<=mid_element;b++)
		{
        	temp_array[a]=arrays[b];
        	a++;
        }
    }
    for(b=min;b<=max;b++)
	{
        arrays[b]=temp_array[b];
    }
}