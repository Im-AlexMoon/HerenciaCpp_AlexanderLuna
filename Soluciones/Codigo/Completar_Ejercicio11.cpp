#include <iostream>
#include <string>
using namespace std;

class Dispositivo { public: string marca; };
class Tablet : virtual public Dispositivo {};
class Telefono : virtual public Dispositivo {};
class Smartphone : public Tablet, public Telefono {};

int main() {
    Smartphone s;
    s.marca = "MiMarca";
    cout << s.marca << endl;
    return 0;
}
