
/*
Write a program which checks whether 15th bit is On or OFF.
input:147456
op:ON
ip:137456
OP: OFF
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iValue)
{
	int iCount=0;
	int iRem = 0;
	int iMask=0x00024000;
	int iResult=0;
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
	
    
    iResult = iNo & iMask;
	
	printf("%d\n",iResult);
	if(iResult==iMask)  
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
}
int main()
{

	int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter one number:\n");
	scanf("%d",&iValue);

	bRet=ChkBit(iValue);

	if(bRet==FALSE)
	{
		printf("15th and 18th bit is ON\n");
	}
	else
	{
		printf("all or one of the bit is OFF\n");
	}
	return 0;
}