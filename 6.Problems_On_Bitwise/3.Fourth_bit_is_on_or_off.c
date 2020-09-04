/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */
#include<stdio.h>
# define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL CheckBit(int iNo)
{
    int iPos = 0,iRem = 0;
    if(iNo < 0)   //updator
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iRem = iNo %2;
        iPos++;
        if(iPos == 4)
        {
            break;
        }
        iNo = iNo / 2;
    }
    if((iPos == 4) && (iRem == 1))
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

///////////////////////////////////////////////////////////////////////////
//    another appraoch
///////////////////////////////////////////////////////////////////////////

/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */

/*
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask = 0X00000008;
    
    int iResult = 0;
    if(iNo < 0) //updator
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
*/
/*
    Binary to Hexadecimal conversion
 
    Integer size = 4 bytes      ie 32 bits
 
    Hexadecimal cha base : 16
    Hexadecimal chi range is 0  to 15

Decomal             Binary              Hexadecimal
 0                      0000                        0
1                       0001                        1
2                       0010                        2
 3                      0011                        3
 4                      0100                        4
 5                      0101                        5
 6                      0110                        6
 7                      0111                        7
 8                      1000                        8
 9                      1001                        9
 10                     1010                        A
 11                     1011                        B
 12                     1100                        C
 13                     1101                        D
 14                     1110                        E
 15                     1111                        F
 
    For the 16 we requre 4 bits from binary.                (1111)
 
 
 Number representation in Hexadecimal is in the form of nibles i.e. gropu of four bits
 
 Number : 86
    
 
 
        0000    0000    0000    0000    0000    0000     0101   0110
        0        0        0       0       0      0         5       6
 
Hexadecimal : 0X00000056
 
 */

/*
    Mask designing :
 
 As we want to check the status of fourth bit we just create the mask whose fourth bit is on.
 
 Mask :  0000  0000    0000    0000     0000   0000   0000  1000
         0     0        0       0        0       0    0      8
 
 Hexadecimal mask : 0X00000008
 
 0X01000000
 */