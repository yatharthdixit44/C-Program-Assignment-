/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
    printf("Enter the value of a[i]");
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
            for(j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    a[j]=a[j]^a[j+1];
                    a[j+1]=a[j]^a[j+1];
                    a[j]=a[j]^a[j+1];}
            }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);}
}
