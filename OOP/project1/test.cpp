#include <iostream>
using namespace std;

class A {
    public:
        int a;
        A(int a) {
            this->a = a;
        }
        void print() {
            cout << a << endl;
        }
};

int main() {
    A a(3);
    a.print();
    return 0;
}