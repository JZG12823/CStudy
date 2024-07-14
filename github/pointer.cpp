//pointer
#include <iostream>
using namespace std;
int main(){
    int a = 0;
    int *p = &a;
    cin >> a;
    cout <<  a << "\n";
    cout << p << "\n";
    cout << *p << "\n";
}