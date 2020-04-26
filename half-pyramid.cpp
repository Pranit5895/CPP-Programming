#include <iostream>
using namespace std;

int main()
{
    int Entered_rows;

    cout << "Enter number of rows: ";
    cin >> Entered_rows;

    for(int i = 1; i <= Entered_rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;

/*Output goes like
*
* *
* * *
* * * *
* * * * *
*/
