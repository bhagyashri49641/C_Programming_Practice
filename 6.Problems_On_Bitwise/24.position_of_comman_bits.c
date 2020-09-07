/*
2. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input :10 15 (1010  1111)
Output :2  4

Input:  10110110
 	00111100
Output:	3 5 6
*/
#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	int iMask=0x00000001;
	UINT iResult=0;
	UINT iResult2=0;
	int iCount=0;
	int i=0;

	iResult= iNo1 & iNo2;

	printf("position of comman on bits are:\n ");

	for(i=1;i<=32;i++)
	{
		iResult2= (iResult & iMask);

		if(iResult2 == iMask)
		{
			printf("%d\t",i);
		}

		iMask=iMask<<1;
	}
}

void DisplayCommon(UINT iNo1,UINT iNo2)
{
	UINT iNo=0;
	UINT iResult=0;
	int iMask=0x00000001;
	int iCnt=0;

	iNo=iNo1 & iNo2;

	printf("\nposition of comman on bits are :\n");
	iCnt=1;
	while(iNo!=0)
	{
		iResult=iNo & iMask;

		if(iResult==1)
		{
			printf("%d\t",iCnt);
			
		}
		iCnt++;
		iNo=iNo>>1;
	}
}
int main()
{
    UINT iNo1 = 0;
    UINT iNo2=0;
    
    printf("Enter number\n");
    scanf("%d",&iNo1);

    printf("Enter number\n");
    scanf("%d",&iNo2);

    CommonBits(iNo1,iNo2);
	DisplayCommon(iNo1,iNo2);


    return 0;
}
