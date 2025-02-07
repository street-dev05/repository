#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float P, R;
    int T;

    cout << "Enter the principal amount (P): ";
    cin >> P;
    cout << "Enter the loan period in years (T): ";
    cin >> T;
    cout << "Enter the interest rate (R): ";
    cin >> R;

    float I = (P * T * R) / 100;

    cout << fixed << setprecision(2);
    cout << "Interest as float: " << I << endl;
    cout << "Interest as int: " << static_cast<int>(I) << endl;

    return 0;
}