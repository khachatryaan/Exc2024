#include <iostream>

void sumFunction(int nums[], int size, int target) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] + nums[j] == target) {          
     		    std::cout << "Numbers: " << nums[i] << " and " << nums[j] << std::endl;
                return;
            }
        }
    }
    std::cout << "No pair found with the given sum." << std::endl;
}

int main() {
    int nums[100];
    int target;
    int size;

    std::cout << "Input size of array: ";
    std::cin >> size;

    if (size <= 0 || size > 100) {
        std::cout << "Invalid size of array" << std::endl;
        return 1;
    }

    std::cout << "Input elements of array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }

    std::cout << "Input target number: ";
    std::cin >> target;

    sumFunction(nums, size, target);

    return 0;
}

