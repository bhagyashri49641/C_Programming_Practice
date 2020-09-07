/*
1.Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input :11
Output :3
*/
#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	int iMask=0x00000001;
	UINT iResult=0;
	int iCount=0;
	int i=0;
	
	for(i=0;i<32;i++)
	{
		iResult= (iNo & iMask);

		if(iResult==iMask)
		{
			iCount++;
		}
		iMask=iMask<<1;
	}
	
	/*
	for(i=0,iMask=0x00000001;i<((sizeof(int)*8)-1);i++,iMask=iMask<<1)
	{
	    iResult = iNo & iMask;
		if(iResult!=0)
		{
			iCount++;
		}
	}
	*/
	return iCount;
}
int CountOnex(UINT iNo) // Least Complexity code 
{
	UINT iMask=0x00000001;
	UINT iResult=0;
	int iCnt=0;

	while(iNo!=0)
	{
		iResult =iNo & iMask;
		 if(iResult !=0) // (iResult ==1)
		 {
		 	iCnt++;
		 }
		 iNo = iNo >>1;
	}
	return iCnt;
}

int main()
{
    UINT iNo = 0;
    int iRet = 0;
    int iRet1 = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet = CountOne(iNo);
    iRet1 = CountOnex(iNo);
    printf("number of 1 are: %d",iRet);

    return 0;
}