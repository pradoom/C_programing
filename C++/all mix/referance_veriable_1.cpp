#include <iostream>

// Function that takes an array by reference
void modifyArray(int (&arr)[5]) {
    // Modify the elements of the array
    for (int i = 0; i < 5; ++i) {
        arr[i] *= 2;
    }
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    // Call the function and pass the array by reference
    modifyArray(myArray);

    // Print the modified array
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
