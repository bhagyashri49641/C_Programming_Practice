/*
3. Write a program which accept one number and position from user and on
that bit. Return modified number.
Input : 10 3
Output :14
*/

#include<stdio.h>
typedef unsigned int UINT;


UINT OnBit(UINT iNo, int iPos)
{
    int iMask = 0X000000001;
    
    int iResult = 0;
    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }
    iMask=iMask<<(iPos-1);

    iResult = iNo & iMask;
    
    if(iResult != iMask)
    {
        iNo = iNo ^ iMask;
    }
 	else
 	{
 		printf("Bit is already ON\n");
 	}
    return iNo;
}
int main()
{
    UINT iNo = 0;
    UINT iRet = 0;
    int iPos=0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);

    printf("Enter Position:\n");
    scanf("%d",&iPos);
    	
    iRet = OnBit(iNo,iPos);
    
    printf("changed number is %d",iRet);
    return 0;
}