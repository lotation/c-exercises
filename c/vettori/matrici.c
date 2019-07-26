#include <stdio.h>

int main()	{
	int i,j;
	int matrix[7][3];
	
	for(i=0;i<7;i++)	{
		
		for(j=0;j<3;j++)	{
			
			printf("\nInsert %d %d value",i,j);
			scanf(" %d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<7;i++)	{
		
		printf("\n");
		
		for(j=0;j<3;j++)	{
			
			printf("%d ",matrix[i][j]);
		}
	}
}