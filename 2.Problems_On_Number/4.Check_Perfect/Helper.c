#include "Header.h"


//////////////////////////////////////////////////////////////
//
//  Function name : 	CheckPerfect
//  Input : 		    Interger
//  Output :    	    Boolean
//  Description :   	It is used to whether number is perfect or not
//  Autor : 		    shree
//  Date :  		    30th July 2020
//
//////////////////////////////////////////////////////////////

// Istri wala to dryclealn
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

BOOL CheckPerfect(int iNo)
{
    int iRet = 0;
    
    if(iNo < 0)             // updator for negative values
    {
        iNo = -iNo;
    }
    
    if(iNo == 0)       // Filter
    {
        return FALSE;
    }
    
    iRet = SumOfFactor(iNo);
    
    if(iRet == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


//////////////////////////////////////////////////////////////
//
//  Function name : 	CheckPerfect
//  Input : 		    Interger
//  Output :    	    Boolean
//  Description :       It is used to whether number is perfect or not
//  Autor : 		    shree
//  Date :  		    30th July 2020
//	
//////////////////////////////////////////////////////////////

// Independent function (Atmanirbhar)

BOOL CheckPerfectx(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    
    if(iNo < 0)             // updator for negative values
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))        // Filter
    {
        return FALSE;
    }
    
    // Dukanat ch dryclean kara baher n deta
    //      1          2            3
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    if(iSum == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////
//
//  Time complexity : O(N/2)
//  Where N is the input for our applicartion.
//
//////////////////////////////////////////////////////////////////////////












