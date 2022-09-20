#include<stdio.h>
#include <stdio.h>
void main()
{
	int num;
	int i,keynum,found =0;
	printf("enter the number of elements");
	scanf("%d",&num);
	int array[num];
	printf("enter the elements one by one");
	for(i=0;i<num;i++){
		scanf("%d",&array[i]);
		
	}
	printf("enter the element to be searched=");
	scanf("%d",&keynum);
	for(i=0;i<num;i++)
	{
		if(keynum == array[i])
		{
			found = 1;
			break;
		}
	}
	if(found==1)
	printf("element is present in the array at position=%d",i+1);
	else 
	printf("element is not present in the array");

}
