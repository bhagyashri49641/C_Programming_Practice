#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : 	SumOfFactor
//  Input : 			Interger
//  Output :    		Integer
//  Description :   	It is used to perform the addition of the factors
//  Author : 			Shree
//  Date :  			29th July 2020
//
//////////////////////////////////////////////////////////////

int SumOfFactor(int iNo)
{
    int iSum = 0;       // Used to store the addition of factors
    int iCnt = 0;         // Used for loop counter
    
    // Filter
    if(iNo == 0)        // If the input number is 0
    {
        return 0;
    }
    
    // Input updator
    if(iNo < 0)             // If the input is negative
    {
        iNo = -iNo;         // convert that negative number into positive number
    }
    
    //          1               2               3
    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    return iSum;
}

//////////////////////////////////////////////////////////////////////////
//
//  Time complexity : O(N/2)
//  Where N is the input for our applicartion.
//
//////////////////////////////////////////////////////////////////////////














