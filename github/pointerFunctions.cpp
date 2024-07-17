//pointer functions
#include <iostream>
using namespace std;
//needs to be from int * to int *
void half(int* a, int* b){
    //include * on variable in here, idk why it is just the way they like it
    *b = *b / 2;
    *a = *a / 2;
}
int main(){
    int f = 4;
    int s = 6;
    //pointers need to be to references if they want to attain val
    int *ptrf = &f;
    int *ptrs = &s;
    cout << "f " << f << "\n";
    cout << "s " << s << "\n";
    cout << "half" << "\n";
    //pointer symbol not needed here
    half(ptrf, ptrs);
    cout << "f " << f << "\n";
    cout << "s " << s << "\n";
    return 0;
}
