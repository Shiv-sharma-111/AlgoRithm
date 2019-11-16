#include<stdio.h>
int main()
{
int num,divisor,sum,i,j,T;
//printf("Enter the number of test_cases");
scanf("%d",&T);
for(i=0;i<T;i++)
{
sum=0;
// printf("Enter the numbers");
scanf("%d",&num);
for(j=1;j<num;j++)
{
divisor=num%j;
if(divisor==0)
{
sum=sum+j;
}
}
printf("%d\n",sum);
}
return 0;
}
