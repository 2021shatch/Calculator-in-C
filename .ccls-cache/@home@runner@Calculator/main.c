#include <stdio.h>  
int main()  
{  
    // declare local variables  
    char opt;  
    int n1, n2;   
    int sol;
    printf (" \nEnter two integers. Press return after each integer. \n");  
    scanf("%d", &n1);   
    scanf ("%d", &n2); 
  
    printf ("Enter an operation (+,-,*,/, or %). Then press return. \n");  
    scanf (" %c", &opt); // take an operator  
      
    switch(opt)  
    {  
        case '+':  
            sol = n1 + n2; // add two numbers  
            sol = (int)sol;
            printf ("%d", sol);  
            break;  
          
        case '-':  
            sol = n1 - n2; // subtract two numbers  
            printf ("%d", sol);  
            break;  
              
        case '*':  
            sol = n1 * n2; // multiply two numbers  
            printf ("%d", sol);  
            break;            
          
        case '/':  
            if (n2 == 0)   // if n2 == 0, take another number  
            {  
                printf ("\nDivisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            sol = n1 / n2; // divide two numbers  
            printf ("%d", sol);  
            break;
      case '%':
            if (n2 == 0)   // if n2 == 0, take another number  
            {  
                printf ("\nDivisor cannot be zero. Please enter another value\n");  
                scanf ("%d", &n2);        
                }  
            sol = n1 % n2;
            printf("%d", sol);
            break;
        default:  /* use default to print default message if any condition is not satisfied */  
            exit('\n');               
    }  
    return 0;  
}  