#include <iostream>

// Function template
template <typename T>
T maxValue(T a, T b) {
  //memorise this shit, this is how they want it done on the CPA
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Max of 3 and 7: " << maxValue(3, 7) << std::endl;
    std::cout << "Max of 3.5 and 2.1: " << maxValue(3.5, 2.1) << std::endl;
    return 0;
}
