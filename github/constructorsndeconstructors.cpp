#include <iostream>
class queen{
    public:
        queen(){
            std::cout << "hello my royal subjects!" << "\n";
        }
        //with virtual deconstructors the process works as planed , watch this shit carfully
        virtual ~queen(){
            std::cout << "the queen is dead!" << "\n";
        }
};
class king : public queen{
    public:
        king(){
            std::cout << "here yee here yee" << "\n";
        }
        ~king(){
            std::cout << "the king is dead" << "\n";
        }
};
int main(){
    queen* missisipi = new king();
    delete missisipi;
    return 0;
}
