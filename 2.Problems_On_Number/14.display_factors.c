/////////////////////////////////////  helper.h //////////
#include<stdio.h>       // REquired for printf and scanf

void DisplayFactor(int);

////////////////////////////////////////  main.c   //////////////////////////////
/*
Problem statement :
 Accept number from user and display factors of that number.
 
 Input : 12         Output :   1    2   3   4   6
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
 
            Iterate till the counter is less than the number ie no
                check whether the cnt divides the no completetly
                    if yes
                        then display the counter
                incremnet the value of counter by 1
 
            continue to the iteration
    END
*/

//#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);      // Function call    Dukanat ja	
    
    return 0;
}

/////////////////////////////////////////////////////  helper.c ////////////////////////////////////////////////
//#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name :   DisplayFactor
//  Input :           Interger
//  Output :          None
//  Description :     It is used to display the factors
//  Author :          Shree

//  Date :            28th July 2020
//
//////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)         // 12
{
    int iCnt = 0;                         // 0  1   2   3   4   5   6   ....... 11  12
    // Sequance of loop 1   2   4  3   2   4  3   2    4  3   2    4  3   2     4 ..........
    //           1              2            3
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iNo % iCnt) == 0)        // 4
       {
               printf("%d\n",iCnt);
       }
    }
}

 
//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :    None
//  Description :   It is used to display the factors
//  Autor : shree
//  Date :  28th July 2020
//
//////////////////////////////////////////////////////////////

void DisplayFactorx(int iNo)         // 12
{
    int iCnt = 0;             //  0 1   2   3   4   5   6   7 _______________
    // Sequance of loop 1   2   4  3   2   4  3   2    4  3   2    4  3   2     4 ..........

    //           1              2            3
    for( iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
       if((iNo % iCnt) == 0)        // 4
       {
               printf("%d\n",iCnt);
       }
    }
}















