**9**
#include<stdio.h>
int main()
{
    int n,k,i,sum;
 
    printf("请输入一个正整数\n");
    scanf("%d",&n);
    printf("全部完全数为");
    for(i=1;i<=n;i++)
{
    for(k=1;k<i;k++)
{
    if(i%k==0)
    sum+=k;
}
    if(sum==i)
    printf("%d",i);
    sum = 0; 
}
}
