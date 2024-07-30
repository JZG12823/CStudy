//shape class array
#include <iostream>
class shape{
    private:
        std::string name;
    public:
        shape(std::string name_in){
            name = name_in;
        }
        virtual double area(){return 0.0;}
        virtual double volume(){return 0.0;}
        std::string getName(){
            return name;
        }
};
class rectangle : public shape{
    private:
        double width;
        double height;
    public:
        rectangle(std::string name_in, double width_in, double height_in) : shape(name_in){
            width = width_in;
            height = height_in;
        }
        double area() override{
            return width * height;
        }
};
class circle : public shape{
    private:
        double radius;
    public:
        circle(std::string name_in, double radius_in) : shape(name_in){
            radius = radius_in;
        }
        double area() override{
            return (3.14159 * radius * radius);
        }
};
int main(){
    shape* arr[] = {new circle("circle1", 2),new rectangle("rectangle1", 3, 2)};
    for(int i = 0; i < 2; i++){
        std::cout << arr[i]->getName() << " ";
        std::cout << arr[i]->area();
        std::cout << "\n";
    }
    return 0;
}
