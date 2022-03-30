#include<stdio.h>
int main()
{
    char a[100];
    int lenth,n,i;
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        lenth=strlen(a);
        {
            if(lenth<=4)
            {
                printf("%s",a);
            }
            else
            {
                printf("%c%d%c",a[0],lenth-2,a[lenth-1]);
            }
        }
    }
 
 
    return 0;
}
