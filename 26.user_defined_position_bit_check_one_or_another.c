/*
4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input :10  2  7
Output :TRUE
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask1=0x00000001;
	UINT iMask2=0x00000001;
	UINT iResult1=0;
	UINT iResult2=0;

	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	iResult1 = iNo & iMask1;
	iResult2 = iNo & iMask2;
    
   if((iResult1==iMask1)||(iResult2==iMask2))
   {
   	return TRUE;
   } 
   else
   {
   	return FALSE;
   }
}


int main()
{

	int iValue=0;
	int iPos1=0;
	int iPos2=0;
	BOOL bRet=FALSE;

	printf("Enter one number:\n");
	scanf("%d",&iValue);


	printf("Enter position1:\n");
	scanf("%d",&iPos1);

	printf("Enter position2:\n");
	scanf("%d",&iPos2);

	bRet=ChkBit(iValue,iPos1,iPos2);

	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}