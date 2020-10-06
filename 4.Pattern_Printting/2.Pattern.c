/*

 Write a program which accept number from user and display below patternwill display b:
 
 Input :    5
Output :   	1  *  2  *  3   *   4   *   5   *
 
 Input : 2
 Output :   1	*  2  *
 
 */


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t *\t",iCnt);
    }
    printf("\n");
} 

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}

