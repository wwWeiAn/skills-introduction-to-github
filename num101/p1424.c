/*有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，假设从周 x 开始算起，过了 n 天以后，小鱼一共累计游泳了多少公里呢？

输入格式
输入两个正整数 x,n，表示从周 x 算起，经过 n 天。

输出格式
输出一个整数，表示小鱼累计游泳了多少公里。

输入输出样例
输入 #1复制

3 10
输出 #1复制

2000
说明/提示
数据保证，1≤x≤7，1≤n≤10 
6
 。*/
 #include <stdio.h>

 int main() {
     int x, n, sum = 0;
     scanf("%d %d", &x, &n);
     int start_day = x - 1; 
 
     for (int i = 0; i < n; i++) {
         int current_weekday = (start_day + i) % 7;
         if (current_weekday != 5 && current_weekday != 6) 
         { 
             sum += 250;
         }
     }
 
     printf("%d", sum);
     return 0;
 }
 