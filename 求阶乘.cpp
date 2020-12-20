#include <stdio.h>
void main()
{
 int n,m=1,i,j;
 printf("请输入一个正整数：");
 scanf("%d",&n);

 i=n,j=n;

 while(i>0)
 {
  m*=i;
  i=i-1;
 }
 printf("它的阶乘为：%d",m);

 m=1;
 do
 {
  m*=j;
  j=j-1;
 }while(j>0);
 printf("\n它的阶乘为：%d",m);
}