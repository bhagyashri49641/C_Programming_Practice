


#include<stdio.h>       // Used for IO functions

double Percentage(int,int);    // Function prototype

int main()                      // Entry point function
{
    int Total_marks = 0, Marks_obtained = 0;
    double dPercentage = 0.0;
    
    printf("Enter first number\n");
    scanf("%d",&Total_marks);
    
    printf("Enter second number\n");
    scanf("%d",&Marks_obtained);
    
    dPercentage = Percentage(Total_marks, Marks_obtained);
    
    printf("Division of two numbers is %lf%%\n",dPercentage);
    
    return 0;
}

double Percentage(
                    int Total_marks,        // First number            
                    int Marks_obtained         // Second numbber       
                )
{
    double dRet = 0.0;                      // Local variable to store division
    
    if(Total_marks == 0)                            // Input validation
    {
        return 0.0;
    }
    
    dRet = ((double)Marks_obtained / (double)Total_marks)*100;   // Typecasting
    
    return dRet;                        // Return the division      
}


