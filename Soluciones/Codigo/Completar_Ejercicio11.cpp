#include <iostream>
#include <string>
using namespace std;

class Dispositivo { 
public: 
string marca; 
Dispositivo(const string& marca = ""):marca(marca){}
};

class Tablet : virtual public Dispositivo {
public:
Tablet():Dispositivo(marca){}
};
class Telefono : virtual public Dispositivo {
public:
Telefono():Dispositivo(marca){}
};
class Smartphone : public Tablet, public Telefono {
public:
Smartphone():Tablet(),Telefono(){}
};

int main() {
    Smartphone s;
    s.marca = "MiMarca";
    cout << s.marca << endl;
    return 0;
}
