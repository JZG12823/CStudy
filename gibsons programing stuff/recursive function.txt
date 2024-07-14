//recursion function
#include <iostream>
using namespace std;
long long drf(int a){
    if(a > 1){
        return a * drf(a - 1);
    }else{
        return 1;
    }
}

int main() {
    long long ret = drf(20);
    cout << ret;

    return 0;
}