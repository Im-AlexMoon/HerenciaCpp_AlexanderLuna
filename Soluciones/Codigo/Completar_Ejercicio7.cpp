// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Instrumento {
public:
    virtual void tocar() {
        cout<<"Estas tocando el instrumento \n";
    }
};

class Guitarra : public Instrumento {
public:
    void tocar() override {
        cout<<"Ahora estas tocando la guitarra \n";
    }
};

void probar(Instrumento* inst) {
    inst->tocar();
}

int main() {
    Guitarra g;
    probar(&g);
    
    return 0;
}
