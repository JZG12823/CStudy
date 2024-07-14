//overloaded functions
#include <iostream>
using namespace std;
int maths(int a, int b){
    if(a != 0 && b!= 0){
        int c = a + b;
        return c;
    }else{
        return 0;
    }
}
int maths(double a, double b){
    if(a != 0 && b!= 0){
        //can be differesnt but makes less efficiant to understand
        int c = a + b;
        return c;
    }else{
        return 0;
    }
}

int main() {
    cout << maths(1, 2) << "\n";
    cout << maths(1.0, 2.0) << "\n";

    return 0;
}