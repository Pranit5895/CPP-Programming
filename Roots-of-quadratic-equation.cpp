#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float A, B, C, X1, X2, Discriminant, Real_part, Imaginary_part;
    cout << "Enter coefficients A, B and C: ";
    cin >> A >> B >> C;
    discriminant = B*B - 4*A*C;
    
    if (Discriminant > 0) {
        X1 = (-B + sqrt(Discriminant)) / (2*A);
        X2 = (-B - sqrt(Discriminant)) / (2*A);
        cout << "Roots are real and different." << endl;
        cout << "X1 = " << X1 << endl;
        cout << "X2 = " << X2 << endl;
    }
    
    else if (Discriminant == 0) {
        cout << "Roots are real and same." << endl;
        X1 = (-B + sqrt(Discriminant)) / (2*A);
        cout << "X1 = X2 =" << x1 << endl;
    }

    else {
        Real_part = -B/(2*A);
        Imaginary_part =sqrt(-Discriminant)/(2*A);
        cout << "Roots are complex and different."  << endl;
        cout << "X1 = " << Real_part << "+" << Imaginary_part << "i" << endl;
        cout << "X2 = " << Real_part << "-" << Imaginary_part << "i" << endl;
    }

    return 0;
}
