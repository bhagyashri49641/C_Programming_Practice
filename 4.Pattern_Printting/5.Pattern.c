/*
 
 Write a program which accept number of rows and coluns from user and display below pattern:
 
Input :   (Row = 4 Columns = 4)
Output :
 
 *  *   *   *
 $  $   $   $
 *  *   *   *
 $  $   $   $

*/
#include<stdio.h>

void Pattern(int iRow, int iCol) // if else condition gets checked for iRow*iCol times
{
    int i = 0, j = 0;
    
    for(i = 1; i<= iRow; i++)           // To iterate rows
    {
        for(j = 1; j<= iCol; j++)   // To iterate columns
        {
            if((i % 2) == 0)    // For even no of row
            {
              printf("$\t");
            }
            else                    // For odd no of row
            {
                printf("*\t");
            }
        }
         printf("\n");
    }
             printf("\n");

}

// Time Complexity O(N^2)

//                          3            3
void PatternX(int iRow, int iCol) // if else condition gets checked for iRow times
{
    int i = 0;              // 0    1                   2                  3                        4
    int j = 0;              // 0    1   2   3   4    1   2   3   4    1     2     3     4
    char ch = '\0';      // 0    *                   $                  *
    
    for(i = 1; i<= iRow; i++)           // To iterate rows
    {
        if((i %2) == 0) { ch = '$'; }
        else{ ch = '*'; }
        
        for(j = 1; j<= iCol; j++)   // To iterate columns
        {
              printf("%c\t",ch);
        }
         printf("\n");
    }
             printf("\n");

}

void PatternXX(int iRow, int iCol) // if else condition gets checked for 0 times
{
    int i = 0;
    int j = 0;
    //              0    1
    char arr[2] = {'$', '*'};
    
    for(i = 1; i<= iRow; i++)           // To iterate rows
    {
        for(j = 1; j<= iCol; j++)   // To iterate columns
        {
              printf("%c\t",arr[i%2]);  // for odd row this will print * andS for even ROW Print $
        }
         printf("\n");
    }
}
int main()
 {
     int iValue1 = 0, iValue2 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     printf("Enter second number\n");
     scanf("%d",&iValue2);
     
     Pattern(iValue1, iValue2);
     PatternX(iValue1, iValue2);
     PatternXX(iValue1, iValue2);
     return 0;
 }