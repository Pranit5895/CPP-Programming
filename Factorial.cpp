#include <iostream>
using namespace std;

int main()
{
    unsigned int Number;
    unsigned long long Factorial_of_number = 1;

    cout << "Enter a positive integer: ";
    cin >> Number;

    for(int i = 1; i <=Number; ++i)
    {
        Factorial_of_number *= i;
    }

    cout << "Factorial of " << Number << " = " << Factorial_of_number;    
    return 0;
}
