#include <iostream>
int max(int a, int b, int c){
    return((a > b) & (a > c) ? a : (b > a) & (b > c) ? b : c);
}
int main(){
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;
    int c;
    std::cin >> c;
    std::cout << "the max is : " << max(a, b, c);
    return 0;
}