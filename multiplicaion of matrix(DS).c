#include<stdio.h>    
int main()
{
  
   	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
	  
	printf("enter the number of row=");    
	scanf("%d",&r);    
	printf("enter the number of column=");    
	scanf("%d",&c);
	    
	printf("\nenter the first matrix element:-\n");    
	for(i=0;i<r;i++)    
	for(j=0;j<c;j++)    
	{ 
	    printf("enter any element a%d%d=",i+1,j+1);   
		scanf("%d",&a[i][j]);    
	}    
    printf("\nenter the second matrix element:-\n");
	for(i=0;i<r;i++)       
	for(j=0;j<c;j++)    
	{    
	    printf("enter any element b%d%d=",i+1,j+1);
		scanf("%d",&b[i][j]);    
	}    
    printf("\nmultiplication of the matrix is:-\n");    
	for(i=0;i<r;i++)    
   	for(j=0;j<c;j++)    
	{    
	    mul[i][j]=0;    
		for(k=0;k<c;k++)    
	{    
	mul[i][j]+=a[i][k]*b[k][j];    
	}    
	}        
	for(i=0;i<r;i++)    
   	for(j=0;j<c;j++)    
	{    
		printf("%d  ",mul[i][j]);
		if(j==c-1)
		{
			printf("\n\n"); 
		}    
	}    		       
	return 0;  
}  