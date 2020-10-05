/*
aacept one number from user and display its addition of digits 
*/
#include<stdio.h>

int Display(int);

int main()
{
	int value = 0;
	int ret = 0;
	
	printf("Enter Number:");
	scanf("%d",&value);

	ret = Display(value);
	printf("Addition of Digits are:%d\n",ret);

	return 0;
}

int Display(int No)
{
	int digit = 0;
	int cnt = 0;

	while(No != 0)
	{
		digit = No % 10;
		cnt = cnt + digit;
		No = No / 10;
	}

	return cnt;
}
