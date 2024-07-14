// constance
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    cin >> i;
    const int r = i;
    const int &a = r;
    i = i * i;
    cout << a << " " << r << " " << i;

    return 0;
}