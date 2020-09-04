/*5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input :73
Output :79
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    int iMask = 0X00000000F;
    
    int iResult = 0;
    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }

    iResult = iNo | iMask;
   
    return iResult;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    iRet = OnBit(iNo);
    
    printf("changed number is %d",iRet);
}