#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float R;
    const float PI = 3.14;

    cout << "Enter the radius (R): ";
    cin >> R;

    float area = PI * R * R;

    float circumference = 2 * PI * R;

    cout << fixed << setprecision(2);
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    return 0;
}