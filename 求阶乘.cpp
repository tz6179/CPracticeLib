#include <stdio.h>
void main()
{
 int n,m=1,i,j;
 printf("������һ����������");
 scanf("%d",&n);

 i=n,j=n;

 while(i>0)
 {
  m*=i;
  i=i-1;
 }
 printf("���Ľ׳�Ϊ��%d",m);

 m=1;
 do
 {
  m*=j;
  j=j-1;
 }while(j>0);
 printf("\n���Ľ׳�Ϊ��%d",m);
}