/*一些整数可能拥有以下的性质：

性质 1：是偶数；
性质 2：大于 4 且不大于 12。
小 A 喜欢这两个性质同时成立的整数；Uim 喜欢这至少符合其中一种性质的整数；小 B 喜欢刚好有符合其中一个性质的整数；正妹喜欢不符合这两个性质的整数。
现在给出一个整数 x，请问他们是否喜欢这个整数？

输入格式
输入一个整数 x(0≤x≤1000)

输出格式
输出这 4 个人是否喜欢这个数字，如果喜欢则输出 1，否则输出 0，用空格分隔。输出顺序为：小 A、Uim、小 B、正妹。

输入输出样例
输入 #1复制

12
输出 #1复制

1 1 0 0*/
#include<stdio.h>
int main()
{
    int x,fact1=0,fact2=0;
    scanf("%d",&x);
    if(x%2==0)
    fact1=1;
    if(x>4&&x<=12)
    fact2=1;
    if(fact1&&fact2)
    printf("1 ");
    else
    printf("0 ");
    if(fact1||fact2)
    printf("1 ");
    else
    printf("0 ");
    if(fact1^fact2)
    printf("1 ");
    else
    printf("0 ");
    if(!fact1&&!fact2)
    printf("1 ");
    else
    printf("0 ");
    return 0;
}