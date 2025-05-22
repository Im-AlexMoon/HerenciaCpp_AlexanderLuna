#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
public:
    Vehiculo(){}
    void encender() {
        cout << "Vehículo encendido" << endl;
    }
};

class Coche : private Vehiculo {
    public:
    Coche():Vehiculo(){}
    void encender(){Vehiculo::encender();}
};

int main() {
    Coche miCoche;
    miCoche.encender(); 
    return 0;
}
