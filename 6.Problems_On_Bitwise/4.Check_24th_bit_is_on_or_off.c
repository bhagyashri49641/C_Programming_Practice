/*
    Problem statement :
 Accept number from user and check whether 24th bit is on or off.
 
 Input :   8388608
 Binary :    0000   0000    1000    0000    0000    0000    0000    0000
 Output : TRUE
 
 Input :   35
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output : FALSE

 ip:4194304
 op:FALSE
 
 */
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask = 0X00800000;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iResult = iNo & iMask;
    
    if(iResult == iMask)
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
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = CheckBit(iNo);
    if(bRet == TRUE)
    {
        printf("Fourth bit is on\n");
    }
    else
    {
        printf("Fourth bit is Off\n");
    }
    return 0;
}

/*
 
    Mask designing :
 
 As we want to check the status of fourth bit we just create the mask whose fourth bit is on.
 
 Mask :  0000       0000            1000            0000        0000            0000       0000        0000
         0           0               8               0           0                0        0             0
 
 Hexadecimal mask : 0X00800000
 
 0X01000000
 
 
 ------------------------------------------------------------------------------------------------
 
 Test case : 1
 
 int iNo = 8388608;
 int iMask = 0x00000008;
 
iNo                         0000    0000    1000    0000    0000    0000    0000   0000
iMask                       0000    0000    1000    0000    0000    0000    0000   0000   &
 ____________________________________________________________________________________________
 iResult                    0000   0000     1000    0000    0000    0000    0000   0000

  ------------------------------------------------------------------------------------------------
*/