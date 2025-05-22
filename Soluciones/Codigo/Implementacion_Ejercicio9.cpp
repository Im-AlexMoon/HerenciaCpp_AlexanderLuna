#include <iostream>
#include <string>
using namespace std;

class Sensor {
protected:
    Sensor(){}
    void detectarMovimiento() {
        cout << "Movimiento detectado" << endl;
    }
};

class SistemaAlarma : private Sensor {
public:
    SistemaAlarma():Sensor(){}
    void verificar() {
        detectarMovimiento();
    }
};

int main() {
    SistemaAlarma sa;
    sa.verificar();
    return 0;
}
