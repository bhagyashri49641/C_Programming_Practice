//Accept one number from user and check it is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


//////////////////////////////////////////////////////////////
//
//  Function name : 	Check
//  Input : 			Interger
//  Output :    		Boolean
//  Description :   	It is used to check num is divisible by 5 or not
//  Autor : 			shree
//  Date :  			31th July 2020
//
//////////////////////////////////////////////////////////////

BOOL Check( int iNo)
{
	if(( iNo % 5) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
////////////////////////////////////////////
//    Entry point function
//////////////////////////////////////////
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number:\n");
	scanf("%d",&iValue);
	bRet = Check(iValue);
	if(bRet == TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
	return 0;
}
