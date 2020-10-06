/*
 Write a program which accept number from user and display below pattern
 
 Input :    5
 Output :   *   *   *   *   *
 
 Input : 2
 Output : * *
 
 Input : -6
 Output : * *  *  *  *  *
 
 */

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         // Updator
    {
        iNo=-iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");      
    }
    printf("\n");
}  


////////////////////////////////////////////////////////////////////////////////////////////////
// 
// ip: 5
// op: * * * * * # # # # # 
//
// ip:-5
// op: * * * * * # # # # #
////////////////////////////////////////////////////////////////////////////

void Pattern1(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         // Updator
    {
        iNo=-iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");      
    }
      
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");      
    }
    
    printf("\n");
}  

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    Pattern1(iValue);
    
    return 0;
}

