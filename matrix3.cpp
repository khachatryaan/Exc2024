#include <iostream>

void findNonRepeatingElements(int array[4][3]) {
    int frequency[101] = {0};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            frequency[array[i][j]]++;
        }
    }

    std::cout << "Non-repeating elements:" << std::endl;
    for (int i = 0; i < 101; ++i) {
        if (frequency[i] == 1) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int matrix[4][3];

    std::cout << "Enter 4x3 array elements:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    findNonRepeatingElements(matrix);

    return 0;
}

