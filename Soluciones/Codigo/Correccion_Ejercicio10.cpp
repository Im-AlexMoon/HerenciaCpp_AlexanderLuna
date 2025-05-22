#include <iostream>
#include <string>
using namespace std;

class A { 
    public: 
    A(){}
    void imprimir() { 
        cout << "A"; 
    } 
};
class B : virtual public A {
    public:
    B():A(){}
};
class C : virtual public A {
    public:
    C():A(){}
};
class D : public B,public C {
    public:
    D():B(),C(){}
};

int main() {
    D obj;
    obj.imprimir(); 
    return 0;
}
