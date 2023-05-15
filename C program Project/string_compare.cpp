#include<stdio.h>

int main()
{
    char a[100],b[100],d;
    int i,len=0,len1=0;
    scanf("%s",a);
    scanf("%c",&d);
    scanf("%s",b);
    while(a[i])
    {
        i++;
        len++;
    }
    printf("%d\n",len);
    i=0;
    while(b[i])
    {
        i++;
        len1++;
    }
    printf("%d\n",len1);
    if(len>len1)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
    
    return 0;
}











