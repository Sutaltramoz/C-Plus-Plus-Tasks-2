#include <iostream>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int target;

    std::cout << "Array elements: 10, 20, 30, 40, 50\n";
    std::cout << "Enter the number you want to find: ";
    std::cin >> target;

    int result = binarySearch(arr, 5, target);

    if (result != -1) {
        std::cout << "Number found at index position: " << result << std::endl;
    } else {
        std::cout << "Number not found in the array.\n";
    }

    return 0;
}
