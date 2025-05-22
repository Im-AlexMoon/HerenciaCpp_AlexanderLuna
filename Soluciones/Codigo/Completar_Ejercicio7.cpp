#include <iostream>
#include <string>
using namespace std;

class Instrumento {
public:
    Instrumento(){}
    virtual void tocar() {
        cout<<"Estas tocando el instrumento \n";
    }
};

class Guitarra : public Instrumento {
public:
    Guitarra():Instrumento(){}
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
