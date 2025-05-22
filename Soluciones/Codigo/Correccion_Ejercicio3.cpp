#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
public:
    void encender() {
        cout << "Vehículo encendido" << endl;
    }
};

class Coche : public Vehiculo {
};

int main() {
    Coche miCoche;
    miCoche.encender(); // ¿Por qué falla?
    return 0;
}
