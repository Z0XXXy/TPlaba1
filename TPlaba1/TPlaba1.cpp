#include <iostream>
#include "MathLibrary.h"
#include <vector>

int main()
{
    std::vector<int> v;
    int n,x;
    std::cout << "Enter a vector lenght:";
    std::cin >> n;
    for (int i=0; i < n; i++) {
        std::cout << "Enter " << i << " number:";
        std::cin >> x;
        v.push_back(x);
    }
    std::cout <<"Result:"<< number_of_numbers(v);
}
