#include <iostream>
using namespace std;

class Student {
    int rollNumber;
};

int main() {
    Student s;
    cout << s.rollNumber;
}


//COMPILATION ERROR---------beacause u cant inherit the class if it is private.....by default every class is private