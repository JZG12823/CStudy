// recursive dream
#include <iostream>
using namespace std;
void recurse(){
    cout << "you are dreaming that " << endl;
    recurse();
}

int main() {
    
    recurse();
    return 0;
}