
//Program to find factorial of given number.

#include<stdio.h>
//////////////////////////////////////////////////////////////
//
//  Function name : 	Factorial
//  Input : 			Interger
//  Output :    		Boolean
//  Description :   	It is used to check num is even or odd
//  Autor : 			shree
//  Date :  			31th July 2020
//
//////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
	int i=0,fact=1;
	for(i=iNo;i>=1;i--) //i=1________while(i<=iNo)_____i++
	{
		fact=fact*i;
	}
	return fact;
}
//////////////////////////////////////////////////////////
//       Entry point function
////////////////////////////////////////////////////////
int main()
{
	int iValue = 0;
	int iret =0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	iret=Factorial(iValue);
	printf("Factorial of given number is:%d\n",iret);
	return 0;
}
