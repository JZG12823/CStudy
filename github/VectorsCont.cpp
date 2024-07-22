#include <iostream>
#include <vector>
int main(){
    std::vector<int> stack;
    const int size = 5;
    for(int i = 3; i < size; i++){
        stack.push_back(i);
    }
    std::cout << "this is at " << stack.at(0) << " this is front " << stack.front() << "\n";
    return 0;
}
