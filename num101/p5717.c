/*给出三条线段 a,b,c 的长度，均是不大于 10000 的正整数。打算把这三条线段拼成一个三角形，它可以是什么三角形呢？

如果三条线段不能组成一个三角形，输出Not triangle；
如果是直角三角形，输出Right triangle；
如果是锐角三角形，输出Acute triangle；
如果是钝角三角形，输出Obtuse triangle；
如果是等腰三角形，输出Isosceles triangle；
如果是等边三角形，输出Equilateral triangle。
如果这个三角形符合以上多个条件，请按以上顺序分别输出，并用换行符隔开。

输入格式
输入 3 个整数 a、b 和 c。

输出格式
输出若干行判定字符串。*/
#include<stdio.h>
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<3;i++)
    {   int m=a[i];
        for(int j=i+1;j<3;j++)
        {
            if(m<a[j])
            {
                a[i]=a[j];
                a[j]=m;
                m=a[i];
            }
        }
    }
    if(a[1]+a[2]<=a[0])
    {
        printf("Not triangle");
    }
    else 
    {
        if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2])
        printf("Right triangle\n");
        if(a[0]*a[0]<a[1]*a[1]+a[2]*a[2])
        printf("Acute triangle\n");
        if(a[0]*a[0]>a[1]*a[1]+a[2]*a[2])
        printf("Obtuse triangle\n");
        if(a[1]==a[2]||a[0]==a[1])
        printf("Isosceles triangle\n");
        if(a[1]==a[2]&&a[1]==a[0])
        printf("Equilateral triangle\n");/* code */
    }
    return 0;
}