#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    Number(int n) {
        num = n;
    }
    // Overload pre-increment operator
    Number operator++() {
        ++num;
        return *this;
    }
    // Overload unary minus operator
    Number operator-() {
        num = -num;
        return *this;
    }
    void display() {
        cout << "Number = " << num << endl;
    }
};

int main() {
    Number n1(5);
    n1.display();
    
    // Testing pre-increment operator overloading
    ++n1;
    n1.display();
    
    // Testing unary minus operator overloading
    -n1;
    n1.display();
    
    return 0;
}
