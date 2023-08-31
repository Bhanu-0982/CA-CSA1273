#include <stdio.h>  
void main()  
{  
    int n, binary_num, decimal_num = 0, base = 1, rem;  
    printf (" Enter a binary number with the combination of 0s and 1s \n");  
    scanf (" %d", &n); 
    binary_num = n;
    while ( n > 0)  
    {  
        rem = n % 10;  
        decimal_num = decimal_num + rem * base;  
        n = n / 10; 
        base = base * 2;  
    }  
    printf ( " The binary number is %d \t", binary_num); 
    printf (" \n The decimal number is %d \t", decimal_num); 
}
