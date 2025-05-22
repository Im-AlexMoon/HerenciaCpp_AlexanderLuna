#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    Persona(const string& nombre = "",const int& edad = 0) : nombre(nombre),edad(edad) {}
};

class Empleado : protected Persona {
public:
    string ocupacion;
    Empleado(const string& nombre = "",const string& ocupacion = "",const int& edad = 0):Persona(nombre,edad),ocupacion(ocupacion) {}
    
    void mostrarDatos() {
        cout<<"El nombre del empleado es: "<<nombre<<endl;
        cout<<"El empleado tiene "<<edad<<" años"<<endl;
        cout<<"La ocupacion del empleado es: "<<ocupacion<<endl;
    }
};

int main() {
    Empleado emp("Alexander","programador",18);
    emp.mostrarDatos();
    return 0;
}
