/*1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input :79
Output :15
*/

#include<stdio.h>

int OffBit(int iNo)
{
    int iMask = 0X000000040;
    
    int iResult = 0;
    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        iNo=iNo^iMask;
    }
 	else
 	{
 		printf("Bit is already OFF\n");
 	}
    return iNo;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    iRet = OffBit(iNo);
    
    printf("changed number is %d",iRet);
}
