/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    const double ANNUAL_RATE = 1.5;
    const int FIVE_YEARS = 5;
    const int SEVEN_YEARS = 7;
    const int TEN_YEARS = 10;
    
    double five_year_result;
    double seven_year_result;
    double ten_year_result;
    
    five_year_result = ANNUAL_RATE * FIVE_YEARS;
    seven_year_result = ANNUAL_RATE * SEVEN_YEARS;
    ten_year_result = ANNUAL_RATE * TEN_YEARS;
    
    std::cout<<"After 5 years: " << five_year_result << " millimeters" << std::endl;
    std::cout<<"After 7 years: " << seven_year_result << " millimeters" << std::endl;
    std::cout<<"After 10 years: " << ten_year_result << " millimeters" << std::endl;

    return 0;
}