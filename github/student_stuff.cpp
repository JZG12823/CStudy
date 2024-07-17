#include <iostream>
#include <vector>
class student{
    private:
        std::string name;
        std::vector<char> grades = {};
        int SID;
    public:
        student(std::string name_in, std::vector<char> grades_in, int SID_in){
            name = name_in;
            grades = grades_in;
            SID = SID_in;
        }
        void datret(){
            std::cout << "name: " << name << "\n";
            std::cout << "student ID: " << SID << "\n";
            std::cout << "grades" << "\n";
            for(char g : grades){
                std::cout << g << "\n";
            }
        }
};
int main(){
    
    std::vector<char> grad = {'a', 'c', 'f', 'b', 'a'};
    student JB("jhon B routledge", grad, 98574624);
    JB.datret();
    
    return 0;
}
