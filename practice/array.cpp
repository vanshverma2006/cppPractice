#include <iostream>
#include <vector>

int main() {
    int el;
    std::cout << "Enter the number of elements: ";
    std::cin >> el;

    std::vector<int> array(el);
    std::vector<int> newArray;

    std::cout << "Enter " << el << " elements: ";
    for (int i = 0; i < el; i++) {
        std::cin >> array[i];
    }

    // Removing duplicates
    for (int i = 0; i < el; i++) {
        bool found = false;
        for (int j = 0; j < newArray.size(); j++) {
            if (array[i] == newArray[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            newArray.push_back(array[i]);  // Add only if not duplicate
        }
    }

    // Printing the unique elements
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newArray.size(); i++) {
        std::cout << newArray[i] << " ";
    }

    return 0;
}