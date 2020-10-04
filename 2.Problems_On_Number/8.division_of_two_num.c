////////////////////////////////////////  helper.h //////////////////////////////////////////////
#include<stdio.h>       // Used for IO functions

typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0

BOOLEAN Division(int,int,double *);    // Function prototype


/*
    Problem statement : Accept two numebrs from user and return its division.
*/
 
/*
    Algorithm
 
    START
 
        Accept first number as no1
        Accept second number as no2
        
        Create one variable as ans
 
        Perform division of no1 & no2
        Store the result in ans
 
        return the value from ans
 
    stop
 */

#include "Header.h"
   //////////////////////////////////////////////  main.c ///////////////////////////////////////////// 
int main()                      // Entry point function
{
    int iNo1 = 0, iNo2 = 0;
    double dAns = 0.0;
    BOOLEAN bRet = FALSE;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    bRet = Division(iNo1, iNo2,&dAns);
    
    if(bRet == FALSE)
    {
        printf("Error : Invalid Input");
    }
    else
    {
        printf("Division of two numbers is %lf\n",dAns);
    }
    
    return 0;
}


///////////////////////////////// Helper.c  //////////////////////////////////////////////////
//#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         Division
//  Input :                 Integrer, Interger, Address of double
//  Output :                Boolean
//  Description:            It is used to perform division
//  Date :                  27 July 2020
//  Author name :           Shree
//
///////////////////////////////////////////////////////////////////

BOOLEAN Division(
                    int iValue1,        // First number
                    int iValue2,         // Second numbber
                    double *pData   // Address of empty variable
                )
{
    double dRet = 0.0;                      // Local variable to store division

    if(iValue2 == 0)                            // Input validation
    {
        return FALSE;           // Return FALSE as a failure
    }
    
    dRet = (double)iValue1 / (double)iValue2;   // Typecasting
    
    *pData = dRet;    // Store the value in the empty variable through pointer
    
    return TRUE;                        // Return the TRUE as a success
}


