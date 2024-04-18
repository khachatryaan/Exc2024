#include <iostream>
void revers1(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
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
    int matrix[3][3];
    std::cout << "Enter a 3x3 matrix:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    std::cout << "Your matrix" << std::endl;
    displayMatrix(matrix);
    revers1(matrix);
    std::cout << "Reversed matrix is" << std::endl;
    displayMatrix(matrix);
    revers1(matrix);
    return 0;


}
//status commit push merge if add
//:wq
