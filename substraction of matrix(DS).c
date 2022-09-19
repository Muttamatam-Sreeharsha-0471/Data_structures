#include<stdio.h>
int main()
{
	int r,c,i,j,a[100][100],b[100][100],sub[100][100];
	
	printf("enter no of rows:");
	scanf("%d",&r);
	printf("enter no of colums:");
	scanf("%d",&c);
	
	printf("\nenter the elements in first matrix:-\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf("enter any element a%d%d=",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	printf("\nenter the elements in second matrix:-\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf("enter any element b%d%d=",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		sub[i][j]=a[i][j]-b[i][j];
	}
	printf("\nsubstraction of that two matrix are:-\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf("%d  ",sub[i][j]);
		if(j==c-1)
		{
			printf("\n\n");
		}
	}
	return 0;
}
