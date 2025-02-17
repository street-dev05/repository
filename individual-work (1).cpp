#include <iostream>

int main() {
    int n;

    std::cout << "Введіть число: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";

        if (i % 5 == 0) {
            std::cout << "\n";
        }
    }

    return 0;
}
