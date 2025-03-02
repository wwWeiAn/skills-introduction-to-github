/*给出三个整数 a,b,c(0≤a,b,c≤100)，要求把这三位整数从小到大排序。

输入格式
输入三个整数 a,b,c，以空格隔开。

输出格式
输出一行，三个整数，表示从小到大排序后的结果。

输入输出样例
输入 #1复制运行

1 14 5
输出 #1复制运行

1 5 14
输入 #2复制运行

2 2 2
输出 #2复制运行

2 2 2*/
#include<stdio.h>

int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        int j=i+1;
        for(;j<3;j++)
        {
            if(arr[j]<arr[i])
            {   int n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}