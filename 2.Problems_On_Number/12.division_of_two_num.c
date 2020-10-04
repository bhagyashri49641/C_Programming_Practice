
///////////////////////////////Header.h////////////////////////////////////////////

#include<stdio.h>       // Used for IO functions

double Division(int,int);    // Function prototype


/////////////////////////////////////main.c//////////////////////////////////////
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


// #include "Header.h"
    
int main()                      // Entry point function
{
    int iNo1 = 0, iNo2 = 0;
    double dAns = 0.0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    dAns = Division(iNo1, iNo2);
    
    printf("Division of two numbers is %lf\n",dAns);
    
    return 0;
}

///////////////////////////////////Helper.c////////////////////////////////////////
//  #include"Header.h"
////////////////////////////////////////////////////////////////////
//
//  Function Name :             Division
//  Input :                     Integrer, Interger
//  Output :                    Floating point number
//  Description:                It is used to perform division
//  Date :                      27 July 2020
//  Author name :         	Shree
//
///////////////////////////////////////////////////////////////////

double Division(
                    int iValue1,        // First number             10
                    int iValue2         // Second numbber       0
                )
{
    double dRet = 0.0;                      // Local variable to store division
    
    if(iValue2 == 0)                            // Input validation
    {
        return 0.0;
    }
    
    dRet = (double)iValue1 / (double)iValue2;   // Typecasting
    
    return dRet;                        // Return the division      21
}


