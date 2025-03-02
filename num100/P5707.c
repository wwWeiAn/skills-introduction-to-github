/*学校和 yyy 的家之间的距离为 s 米，而 yyy 以 v 米每分钟的速度匀速走向学校。

在上学的路上，yyy 还要额外花费 10 分钟的时间进行垃圾分类。

学校要求必须在上午 8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。

由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。

输入格式
一行两个正整数 s,v，分别代表路程和速度。

输出格式
输出一个 24 小时制下的时间，代表 yyy 最晚的出发时间。

输出格式为 HH:MM，分别代表该时间的时和分。必须输出两位，不足前面补 0。

输入输出样例
输入 #1复制

100 99
输出 #1复制

07:48
说明/提示
对于 100% 的数据，1≤s,v≤10 
4
 。*/
 #include<stdio.h>
 int main()
 {
    int s,v,t,HH,MM,time;
    time=8*60;
    scanf("%d %d",&s,&v);
    if(s%v==0)
    t=s/v;
    else
    t=s/v+1;
    if(t+10<=time)
    {
        MM=(time-t-10)%60;
        HH=(time-t-10)/60;
        if(MM>9)
        printf("0%d:%d",HH,MM);
        else
        printf("0%d:0%d",HH,MM);
    }
    else
    {
    time=time+24*60;
    MM=(time-t-10)%60;
    HH=(time-t-10)/60;
    if(MM>9)
    printf("%d:%d",HH,MM);
    else
    printf("%d:0%d",HH,MM);
    }
    return 0;
 }