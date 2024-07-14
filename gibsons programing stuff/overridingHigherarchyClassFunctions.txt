// overriding Higherarchy Class Functions
#include <iostream>
using namespace std;
class grandparent {
    public:
        int age;
        string name;
            grandparent(int a, string b){
                age = a;
                name = b;
            }
            virtual void SayHello(){
                cout << "back in my day, " << age << " years ago" << "\n";
            }
};
class parent : public grandparent{
    public:
        int age;
        string name;
            parent(int a, string b) : grandparent(a, b){
                age = a;
                name = b;
            }
            void SayHello() override{
                cout << "hello! i am " << age << " years old "<< "\n";
            }
};
int main() {
    // Write C++ code here
    grandparent* phelps;
    parent p1(33, "matt");
    phelps = &p1;
    phelps->SayHello();

    return 0;
}