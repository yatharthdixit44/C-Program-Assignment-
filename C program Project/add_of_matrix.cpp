#include <stdio.h>  
int main() 
{  
	int row,col;
    printf("Enter number of rows and coloumns: ");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col],i,j;
    printf("\nEnter elements in first matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements in second matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("\nsummation of two matrix \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d",c[i][j]);
        printf("\n");
	}
    
    return 0;  
}
