#include <iostream>
using namespace std;

int main()
{
    int Number_of_terms, Term_1 = 0, Term_2 = 1, Next_term = 0;

    cout << "Enter the number of terms: ";
    cin >> Number_of_terms;

    cout << "The Fibonacci Series Goes as follows: ";

    for (int i = 1; i <= Number_of_terms; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << Term_1;
            continue;
        }
        if(i == 2)
        {
            cout << Term_2 << " ";
            continue;
        }
        nextTerm = Term_1 + Term_2;
        Term_1 = Term_2;
        Term_2 = Next_term;
        
        cout << Next_term << " ";
    }
    return 0;
}
