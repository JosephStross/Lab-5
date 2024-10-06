#include <iostream>
#include "StringData.h"

int linear_search(std::vector<std::string>& container, std::string element) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}


int binary_search(std::vector<std::string>& container, std::string element) {
    int start = 0;
    int end = container.size() - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (container[mid] == element) {
            return mid;
        }
        if (container[mid] < element) {
            start = mid + 1;
        }
        else if (container[mid] > element) {
            end = mid - 1;
        }
    }
    return -1;
}



int main() {
    std::vector<std::string> dataset = getStringData();

    std::cout << "New Branch Code" << std::endl;

    long long start = systemTimeNanoseconds();
    int lin_not_here = linear_search(dataset, "not_here");
    long long end = systemTimeNanoseconds();
    std::cout << lin_not_here << std::endl;
    std::cout <<"Linear Search, not_here: " << (end - start) << std::endl;

    start = systemTimeNanoseconds();
    int bin_not_here = binary_search(dataset, "not_here");
    end = systemTimeNanoseconds();
    std::cout << bin_not_here << std::endl;
    std::cout <<"Binary Search, not_here: " << (end - start) << std::endl;


    start = systemTimeNanoseconds();
    int lin_mzzzz = linear_search(dataset, "mzzzz");
    end = systemTimeNanoseconds();
    std::cout << lin_mzzzz << std::endl;
    std::cout <<"Linear Search, mzzzz: " << (end - start) << std::endl;

    start = systemTimeNanoseconds();
    int bin_mzzzz = binary_search(dataset, "mzzzz");
    end = systemTimeNanoseconds();
    std::cout << bin_mzzzz << std::endl;
    std::cout <<"Binary Search, mzzzz: " << (end - start) << std::endl;


    start = systemTimeNanoseconds();
    int lin_aaaaa = linear_search(dataset, "aaaaa");
    end = systemTimeNanoseconds();
    std::cout << lin_aaaaa << std::endl;
    std::cout <<"Linear Search, aaaaa: " << (end - start) << std::endl;

    start = systemTimeNanoseconds();
    int bin_aaaaa = binary_search(dataset, "aaaaa");
    end = systemTimeNanoseconds();
    std::cout << bin_aaaaa << std::endl;
    std::cout <<"Binary Search, aaaaa: " <<(end - start) << std::endl;

    return 0;
}
