/*3. Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input :137
Output :201
*/

#include<stdio.h>
typedef unsigned int UINT; 

UINT ToggleBit(UINT iNo)
{
    int iMask = 0x00000040;
    
    int iResult = 0;
    if(iNo < 0) // update no
    {
        iNo = -iNo;
    }
    
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    int iNo = 0;
    UINT iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
        
    iRet = ToggleBit(iNo);
    
    printf("Modified number after bit toggle is : %d\n",iRet);

    return 0;
}

