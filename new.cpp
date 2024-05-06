#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int sum = 0;
    int num;

    std::cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        sum += num;
    }

    std::cout << "Sum of the numbers: " << sum << std::endl;

    return 0;
}
