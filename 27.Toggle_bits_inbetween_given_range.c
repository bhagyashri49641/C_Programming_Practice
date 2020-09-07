/*
5. Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897  9  13

iNo=		0 0011 1000 0001      = 897
iMask=		1 1111 0000 0000 ^    = 7936
			-------------------------------
iResutl=	1 1100 1000 0001      = 7297

Toggle all bits from position 9 to 13 of input number ie 879.
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	
	UINT iMask1=0xFFFFFFFF;
	UINT iMask2=0xFFFFFFFF;
	UINT iMask=0;
	UINT iResult=0;

	iMask1=iMask1<<(iStart-1); 	//sgle one left shift kele mnje start chya right side la sgle zero yetil

	iMask2=iMask2>>(32-iEnd);	//sgle one right shift kele mnje end chya left side la sgle zero yetil

	iMask=iMask1 & iMask2;

	printf("generated mask is%d",iMask);

	iResult = iNo ^ iMask;

	return iResult;
	
    
   	///////one line code for this/////////
   //	return(iNo ^  (  (0xFFFFFFFF<<(iStart-1)) & (0xFFFFFFFF >> (32-iEnd))  ));
   	///////////////////////////////////////
 }
 
int main()
{

	int iValue=0;
	int iStart=0;
	int iEnd=0;
	UINT iRet=0;

	printf("Enter one number:\n");
	scanf("%d",&iValue);


	printf("Enter position1:\n");
	scanf("%d",&iStart);

	printf("Enter position2:\n");
	scanf("%d",&iEnd);

	iRet=ToggleBitRange(iValue,iStart,iEnd);

	printf("Changed Number is :%d",iRet);

	return 0;
}