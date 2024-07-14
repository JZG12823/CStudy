//constant_pointers
#include <iostream>
using namespace std;
int main() {
    int a = 0;
    cin >> a;
    int const *cpo = &a;
    int *const cpt = &a;
    cout << *cpo << " " << *cpt;

    return 0;
}