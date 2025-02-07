#include <iostream>
using namespace std

int main() {
    float A, B, C;

    cout << "Enter the length (A): ";
    cin >> A;
    cout << "Enter the length (B): ";
    cin >> B;
    cout << "Enter the length (C): ";
    cin >> C;

    float surface_area = 2 * (A * B + A * C + B * C);

    float volume = A * B * C;

    cout << "Surface area: " << surface_area << endl;
    cout << "Volume: " << volume << endl;
    return 0;
}