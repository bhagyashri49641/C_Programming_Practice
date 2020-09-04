/*Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
IP:448
OP:TRUE

IP:25
OP:FALSE
*/
# include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
	int iMask=0x000001C0; // 0000 0000 0000 0000 0000 0001 1100 0000
						  //  0     0    0    0    0    1    C    0
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
		printf("7th,8th,9st bits are ON\n");
	}
	else
	{
		printf("One or all bits are OFF\n");
	}

}