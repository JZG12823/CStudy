//stringify
#include <iostream>
#include <string>
int main(){
    int num;
    std::string str;
    std::cout << "enter a number:" << "\n";
    std::cin >> num;
    str = std::to_string(num) + " is the number";
    std::cout << str << "\n";
    return 0;
}
