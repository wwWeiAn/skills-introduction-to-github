/*小 B 喜欢吃苹果。她今天吃掉了 x 个苹果。英语课上学到了 apple 这个词语，想用它来造句。如果她吃了 1 个苹果，就输出 Today, I ate 1 apple.；如果她没有吃，那么就把 1 换成 0；如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s。你能帮她完成这个句子吗？

输入格式
输入一行一个自然数 x，表示吃掉的苹果数。

输出格式
根据题目要求输出。

输入输出样例
输入 #1复制

1
输出 #1复制

Today, I ate 1 apple.
输入 #2复制

3
输出 #2复制

Today, I ate 3 apples.
说明/提示
对于所有数据，0≤x≤100。*/
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>1)
    printf("Today, I ate %d apples.",x);
    else
    printf("Today, I ate %d apple.",x);
    return 0;
}