#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    


        cin.tie(0);
    ios::sync_with_stdio(false);
    cout.precision(16);
    
    int n, q;
    cin >> n >> q;
    
    int **arr = new int*[n];
    int a[n];

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i] = k;
        arr[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    /* DEBUG
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < a[i]; j++) {
            cout << arr[i][j] << endl;
        }
        cout << endl;
    }
    */

    for(int i = 0; i < q; i++) {
        int idx, elem;
        cin >> idx >> elem;
        cout << arr[idx][elem] << endl;
    }
    return 0;
}

