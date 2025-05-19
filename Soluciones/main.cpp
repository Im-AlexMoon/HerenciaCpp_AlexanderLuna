#include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    void comer() {
        cout<<"El animal esta comiendo"<<endl;
    }
};

class Perro : public Animal {
public:
    void ladrar() {
        // ...
        cout<<"El perro ladra"<<endl;
    }
};

int main() {
    cout<<"Este es miPerro :D"<<endl;
    Perro miPerro;
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}
