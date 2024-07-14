//referenceVpointer
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a;
    cin >> a;
    int *p = &a;
    int &r = a;
    cout << p << " " << r << " " << *p << " " << &r;

    return 0;
}