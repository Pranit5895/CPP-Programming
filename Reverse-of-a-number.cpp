#include <iostream>
using namespace std;

int main()
{
    int Input_number, Reversed_number = 0, Remainder;

    cout << "Enter an integer: ";
    cin >> Input_number;

    while(Input_number != 0)
    {
        Remainder = Input_number%10;
        Reversed_number = Reversed_number*10 + Remainder;
        Input_number /= 10;
    }

    cout << "Reversed Number is = " << Reversed_number;

    return 0;
}
