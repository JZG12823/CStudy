//vectors and LAMBDA functions
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    //vectors are basicly arrays with a stick up there ass
    int max;
    vector<int> vec;
    cin >> max;
    for(int j = 0; j <= max; j++){
        vec.push_back(j);
    }
    //LAMBDA vector printer, its eh.
    for_each(vec.begin(), vec.end(), [](int i){
        cout << i << endl;
    });

    return 0;
}