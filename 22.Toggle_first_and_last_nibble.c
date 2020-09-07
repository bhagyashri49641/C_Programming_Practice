
/*
5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)

*/

#include<stdio.h>
typedef unsigned int UINT;


UINT ToggleBit(UINT iNo)
{
    int iMask = 0XF000000F;
    
    int iResult = 0;
    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }

    iResult = iNo ^ iMask;
    
    return iResult;
}
int main()
{
    UINT iNo = 0;
    UINT iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet = ToggleBit(iNo);
    
    printf("changed number is %d",iRet);
    return 0;
}
