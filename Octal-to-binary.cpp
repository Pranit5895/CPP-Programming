#include<iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int Octal_number);

int main()
{
   int Octal_number;
   cout << "Enter an octal number: ";
   cin >> Octal_number;
   cout << Octal_number << " in octal = " << Octal_to_decimal(Octal_number) << " in decimal";
   
   return 0;
}

// Function to convert octal number to decimal
int octalToDecimal(int Octal_number)
{
    int Decimal_number = 0, i = 0, Remainder;
    while (Octal_number != 0)
    {
        Remainder = Octal_number % 10;
        Octal_number /= 10;
        Decimal_number += Remainder * pow(8, i);
        ++i;
    }
    return Decimal_number;
}
