/*Write a program which checks whether 7th & 15th & 21st , 28th bit
is On or OFF.
IP:135282752
OP:TRUE

IP:105282754
OP:FALSE

*/
# include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
	int iMask=0x08104040; // 0000 1000 0001 0000 0100 0000 0100 0000
						  //  0     8    1    0    4    0    4    0
	int iResult=0;
	if(iValue < 0)
    {
        iValue = -iValue;
    }

	iResult=iMask & iValue;

	if(iResult==iMask)
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
	int iValue;
	BOOL bRet=FALSE;

	printf("Enter number :\n");
	scanf("%d",&iValue);

	bRet=ChkBit(iValue);

	if(bRet==TRUE)
	{
		printf("7th,15th,21st,28th bits are ON\n");
	}
	else
	{
		printf("One or all bits are OFF\n");
	}

}