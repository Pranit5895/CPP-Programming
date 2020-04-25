#include <iostream>
using namespace std;

int main()
{
    int arr[2][3][2];
    cout << "Enter 12 values: \n";
    for(int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 2; ++k )
            {
                cin >> arr[i][j][k];
            }
        }
    }
    cout<<"\nDisplaying Value stored:"<<endl;
    for(int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 2; ++k)
            {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
    return 0;
}
