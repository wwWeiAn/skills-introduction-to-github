/*输入年份和月份，输出这一年的这一月有多少天。需要考虑闰年。

输入格式
输入两个正整数，分别表示年份 y 和月数 m，以空格隔开。

输出格式
输出一行一个正整数，表示这个月有多少天。

输入输出样例
输入 #1复制

1926 8
输出 #1复制

31
输入 #2复制

2000 2
输出 #2复制

29
说明/提示
数据保证 1583≤y≤2020，1≤m≤12。*/
#include<stdio.h>
int main()
{
    int y,m,ret=0;
    scanf("%d %d",&y,&m);
    if(y%100==0&&y%400==0)
    ret=1;
    if(y%100!=0&&y%4==0)
    ret=1;
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
        case 2:
            if(ret==1)
            printf("29");
            else
            printf("28");
            break;
    }
    return 0;
}