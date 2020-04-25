#include <iostream>
#include <cmath>
using namespace std;

long long Decimal_to_Binary(int);

int main()
{
    int Decimal_Number, Binary_Number;

    cout << "Enter a decimal number: ";
    cin >> Decimal_Number;
    Binary_Number = Decimal_to_Binary(n);
    cout << n << " in decimal = " << Binary_Number << " in binary" << endl ;
    return 0;
}

long long DecimalToBinary(int n)
{
    long long Binary_Number = 0;
    int Remainder, i = 1, step = 1;

    while (n!=0)
    {
        Remainder = n%2;
        cout << "Step " << step++ << ": " << n << "/2, Remainder = " << Remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        Binary_Number += Remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

