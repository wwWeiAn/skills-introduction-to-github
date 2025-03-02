#include<stdio.h>
int main()
{
    int high[10],num=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d ",&high[i]);
    }
    int reach=0;
    scanf("%d",&reach);
    reach=30+reach;
    for(int i=0;i<10;i++)
    {
        if(reach>=high[i])
        num++;
    }
    printf("%d",num);
    return 0;
}