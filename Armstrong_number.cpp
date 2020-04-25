#include <iostream>
using namespace std;

int main()
{
  int Original_Number, Entered_number, Remainder, Sum = 0;
  cout << "Enter any Positive integer: ";
  cin >> Original_Number;

  Entered_number = Original_Number;

  while(Entered_number != 0)
  {
      Remainder = Entered_number % 10;
      Sum += Remainder * Remainder * Remainder;
      Entered_number /= 10;
  }

  if(Sum == Original_Number)
    cout << Original_Number << " is an Armstrong number!!";
  else
    cout << Original_Number << " is not an Armstrong number!!";

  return 0;
}

