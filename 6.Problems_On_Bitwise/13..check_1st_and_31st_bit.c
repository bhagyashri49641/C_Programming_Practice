/*Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.

IP: 2147483649
OP: ON

IP:
OP:
*/

# include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
	int iMask=0x80000001; // 1000 0000 0000 0000 0000 0000 0000 0001
						  //  8     0    0    0    0    0    0    1
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
	UINT iValue;
	BOOL bRet=FALSE;

	printf("Enter number :\n");
	scanf("%d",&iValue);

	bRet=ChkBit(iValue);

	if(bRet==TRUE)
	{
		printf("1st and last bits are ON\n");
	}
	else
	{
		printf("One or all bits are OFF\n");
	}

}
