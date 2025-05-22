// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Usuario{
  public:
  void login(){
      cout<<"El usuario ha entrado al sistema"<<endl;
  }
};
class Moderador:public Usuario{
    public:
    void moderar(){
        cout<<"El moderador esta moderando u)u"<<endl;
    }
};
class Admin:public Moderador{
    public:
    void banear(){
        cout<<"El administrador ha decidido banearte"<<endl;
    }
};
    
int main(){
    Admin miAdmin;
    miAdmin.login();
    cout<<"..."<<endl;
    miAdmin.moderar();
    miAdmin.banear();
}
