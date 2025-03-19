#include <iostream>
#include <vector>
#include <algorithm> 

int linear_search(const std::vector<int>& arr, int target) {
    for (size_t index = 0; index < arr.size(); ++index) {
        if (arr[index] == target) {
            return index; 
        }
    }
    return -1; 
}

int search_after_sorting(std::vector<int> arr, int target) {
    std::sort(arr.begin(), arr.end()); 
    return linear_search(arr, target); 
}

int main() {
    int n, target;

    
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n); 

   
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    
    std::cout << "Enter the target value to search for: ";
    std::cin >> target;

    
    int index = search_after_sorting(arr, target);
    if (index != -1) {
        std::cout << "Target found at index: " << index << std::endl; 
    } else {
        std::cout << "Target not found in the array." << std::endl; 
    }

    return 0;
}