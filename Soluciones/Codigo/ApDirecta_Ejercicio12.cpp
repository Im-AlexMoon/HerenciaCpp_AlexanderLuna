#include <iostream>
#include <string>
using namespace std;
class Dispositivo{
    public:
    string marca;
    Dispositivo(const string& marca = ""):marca(marca){}
};
class TV: virtual public Dispositivo{};
class DVD:virtual public Dispositivo{};

class ControlRemoto:public TV,public DVD{
    public:
    ControlRemoto(const string& marca = ""):Dispositivo(marca){}
};

int main() {
    ControlRemoto cr("Samsung");
    cout<<cr.marca;
    return 0;
}
