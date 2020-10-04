//swap two numbers using third variable
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two numbers:");
scanf("%d %d",&num1,&num2);
printf("Numbers before swapping:%d %d",num1,num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("Numbers after swapping:%d %d",num1,num2);

return 0;
}
