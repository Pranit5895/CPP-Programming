#include <iostream>
using namespace std;

int main()
{    
    float Number_1, Number_2, Number_3;

    cout << "Enter three numbers: ";
    cin >> Number_1 >> Number_2 >> Number_3;

    if(Number_1 >= Number_2 && Number_1 >= Number_3)
    {
        cout << "Largest number: " << Number_1;
    }

    if(Number_2 >= Number_1 && Number_2 >= Number_3)
    {
        cout << "Largest number: " << Number_2;
    }

    if(Number_3 >= Number_1 && Number_3 >= Number_2) {
        cout << "Largest number: " << Number_3;
    }

    return 0;
}
