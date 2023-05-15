#include<stdio.h>
int main()
{
int m,n,a[100][100],i,j;
printf("enter number of rows");
scanf("%d",&m);
printf("enter number of colomns");
scanf("%d",&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++){
printf("Enter Element at %d%d position",i+1,j+1);
scanf("%d",&a[i][j]);

}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf(" %d ",a[i][j]);
}
printf("\n");
}

return 0;
}
