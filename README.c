# sum-N-number
#include<stdio.h>
int main()
{
  int ctr,sum,range;
  printf("enter the range:");
  scanf("%d",&range);
  for(ctr=0;ctr<range;ctr++)
    sum=sum+ctr;
printf("sum%d",sum);

}
