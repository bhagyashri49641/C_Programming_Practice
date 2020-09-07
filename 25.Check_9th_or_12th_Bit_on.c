
/*
3. Write a program which accept one number from user and check whether
9th __or__ 12th bit is on or off.
Input :257
Output :TRUE
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
	int iCount=0;
	int iRem = 0;
	int iMask1=0x00000100;
	int iMask2=0x00000800;
	int iResult1=0;
	int iResult2=0;
	int iNo=iValue;
	printf("iNo mdhil value=%d\n",iValue);

	if(iValue < 0)  
	{  
		iValue = -iValue;  
	}  
 
	while(iValue != 0)  		//dilelya number cha binary kadun ghenyasathi
	{  
		iRem = iValue % 2;  
		iValue = iValue / 2;  
		printf("%d",iRem);
	}  
	printf("\n");
	printf("LSB  --------------------------> MSB\n");
	printf("LSB  d0×2^0 + d1×2^1 + d2×2^2 + ...  MSB\n");
	printf("binary digit he LITTLE ENDIAN method ne print hot ahet\n"); 
		//ithe binary ult sequence mde display hote...
		//srl disnyasathi array mde ghe realloc vaprun
		//nntr to array reverse kr.............try this
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
	BOOL bRet=FALSE;

	printf("Enter one number:\n");
	scanf("%d",&iValue);

	bRet=ChkBit(iValue);

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