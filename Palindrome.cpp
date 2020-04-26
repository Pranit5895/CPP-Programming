#include <iostream>
using namespace std;

int main()
{
     int Set_number, Entered_number, Reversed_digit, Reverse = 0;

     cout << "Enter a positive number: ";
     cin >> Entered_number;

     Set_number = Entered_number;

     do
     {
         Reversed_digit = Entered_number % 10;
         Reverse = (Reverse * 10) + digit;
         Entered_number = Entered_number / 10;
     } while (Entered_number != 0);

     cout << " The reverse of the number is: " << Reverse << endl;

     if (Set_number == Reverse)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
