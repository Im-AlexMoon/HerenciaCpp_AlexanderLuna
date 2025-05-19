#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string nombre;
    Animal(const string& nombre = "") : nombre(nombre) {}
    void comer() {
        cout << "El animal esta comiendo" << endl;
    }
};

class Perro : public Animal {
public:
    string raza;

    Perro(const string& nombre = "", const string& raza = "")
        : Animal(nombre), raza(raza) {}

    void ladrar() {
        cout << "El perro ladra" << endl;
    }

    void NomRaza(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Raza: "<<raza<<endl;
    }
};

int main() {
    cout << "Este es miPerro :D" << endl;

    Perro miPerro("Edgar","Chihuahua");
    miPerro.NomRaza();
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}
