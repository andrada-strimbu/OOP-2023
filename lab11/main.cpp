#include <iostream>
#include <vector>

template <typename T>
void bubbleSort(std::vector<T>& elements) {
    int n = elements.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (elements[j] > elements[j + 1]) {
                std::swap(elements[j], elements[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};
    bubbleSort(numbers);
    std::cout << "Sorted numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> words = {"apple", "zebra", "banana", "orange"};
    bubbleSort(words);
    std::cout << "Sorted words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
