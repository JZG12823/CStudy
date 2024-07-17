//templates
#include <iostream>
using namespace std;
//using multipull diferent typenames
template <typename T, typename M>
class Pair{
    private:
        T a;
        M b;
    public:
        Pair(T a_in, M b_in){
            a = a_in;
            b = b_in;
        }
        //defines the return type of the function
        T sum(){
            return(a + b);
        }
};
int main(){
    int first = 325;
    double second = 2.5;
    //you could make the same value but i dident cause i wanted to show the whole range
    Pair <int, double> one(first, second);
    Pair <double, int> two(second, first);
    cout << "when we combind one : " << one.sum() << "\n";
    cout << "when we combind two : " << two.sum() << "\n";
    return 0;
}
