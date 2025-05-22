#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    Persona(const string& nombre = ""):nombre(nombre){}
};

class Cliente : protected Persona {
public:
    Cliente(const string& nombre = ""):Persona(nombre){}
    void mostrar() {
        cout << nombre << endl; 
    }
};

int main() {
    Cliente c("Enrique");
    c.mostrar();
    return 0;
}
