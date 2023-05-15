#include <stdio.h>
#include<string.h>

int main()
{
     
    char a[100],b[100];
    scanf("%s",a);
    int i,len=strlen(a)-1;
    for(i=0;a[i];i++)
    {
        b[len]=a[i];
        len--;
    }
   printf("%s",b);

	return 0;
}

