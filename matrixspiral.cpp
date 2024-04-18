#include <iostream>
#define MAX_SIZE 100

void printSpiral(int matrix[][MAX_SIZE], int m, int n) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            std::cout << matrix[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            std::cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    std::cout << std::endl;
}

int main() {
    int m, n;
    std::cout << "Enter number of rows: ";
    std::cin >> m;
    std::cout << "Enter number of columns: ";
    std::cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];
    std::cout << "Enter matrix elements: ";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    printSpiral(matrix, m, n);

    return 0;
}

