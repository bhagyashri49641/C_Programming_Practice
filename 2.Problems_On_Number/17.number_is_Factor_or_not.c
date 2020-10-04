#include<stdio.h>

#define TRUE	0
#define FALSE	1

typedef int BOOL;

BOOL Display(int , int);
///////////////////////////////////////////////////
// Entry point function
//////////////////////////////////////////////////
int main()
{
	BOOL bret;
	int value1 , value2 = 0;
	
	printf("Enter First Number:");
	scanf("%d",&value1);

	printf("Enter Second Number:");
	scanf("%d",&value2);

	bret = Display(value1 , value2);
	if(bret == TRUE)
	{
		printf("Its Factor\n");
	}
	else
	{
		printf("Its not Factor\n");
	}

	return 0;
}

//////////////////////////////////////////////////////////////
//
//  Function name : 	Display
//  Input : 			Interger
//  Output :    		Boolean
//  Description :   	It is used to check num is even or odd
//  Autor : 			shree
//  Date :  			31th July 2020
//
//////////////////////////////////////////////////////////////
BOOL Display(int No1 , int No2)
{
	if((No1 < 0) || (No1 < No2) || (No2 < 0))
	{
		return FALSE;
	}

	if((No1 % No2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

