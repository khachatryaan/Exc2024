#include <iostream>

void addMatrix(int matrix1[3][3], int matrix2[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix1[3][3];
    int matrix2[3][3];

    std::cout << "Enter values for Matrix 1:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter values for Matrix 2:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    std::cout << "\nMatrix 1:" << std::endl;
    displayMatrix(matrix1);

    std::cout << "\nMatrix 2:" << std::endl;
    displayMatrix(matrix2);

    std::cout << "\nSum of Matrixes:" << std::endl;

    addMatrix(matrix1, matrix2);
    displayMatrix(matrix1);

    return 0;
}

