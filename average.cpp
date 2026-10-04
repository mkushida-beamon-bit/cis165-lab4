/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    double value1 = 28;
    double value2 = 32;
    double value3 = 37;
    double value4 = 24;
    double value5 = 33;
    
    double sum;
    sum = value1 + value2 + value3 + value4 + value5;
    
    double average;
    average = sum / 5;
    
    std::cout<<"Sum: " << sum << std::endl;
    std::cout<<"Average: " << average << std::endl;
    
    return 0;
}