#include <iostream>
using namespace std;
class Box{
    public :
    int width;
    int height;
    int length;
    void volume(){
        cout << length * width * height;
    }
};
int main() {
    Box b;
    b.height = 5;
    b.width = 4;
    b.volume();
}
//5*4*h------> h is not defined .....so in place of h garbage value is initialised .....so output is garbage value