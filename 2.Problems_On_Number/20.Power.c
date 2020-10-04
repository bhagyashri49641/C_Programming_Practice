#include<stdio.h>

int Display(int , int); //Helper function declaration

/////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////
int main()
{
	int value1 , value2 = 0;
	int ret = 0;
	
	printf("Enter First Number:");
	scanf("%d",&value1);

	printf("Enter Second Number:");
	scanf("%d",&value2);

	ret = Display(value1 , value2);
	printf("Power is:%d\n",ret);
	
	return 0;
}
//////////////////////////////////////////////////////////////
//
//  Function name : 	Display
//  Input : 			Integer
//  Output :    	    Integer
//  Description :   	It is used to display Power of a number
//  Autor : 			shree
//  Date :  			31th July 2020
//
//////////////////////////////////////////////////////////////
int Display(int No1 , int No2)
{
	register int i = 0;
	int power = 1;

	for(i = 0 ; i < No2 ; i++)
	{
		power = power * No1;
	}
	
	return power;
}

