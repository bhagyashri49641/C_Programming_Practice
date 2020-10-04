#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :         Integer
// Return value :       Integer
// Description :        It is used to check number is even or odd
// Author :             shree
// Date :               20 July 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
BOOLEAN ChkEvenOdd(int iNo)     // Input of the function 
{
    int iResult = 0;           // Local variable
    
    iResult = iNo % 2;       // Mod operator which returns remainder after devision
    
    if(iResult == 1)         // If remainder is 1 means number is Odd
    {
        return FALSE;       // False indicates number is odd
    }
    else
    {
        return TRUE;        // True indicates numbe is even
    }
}

