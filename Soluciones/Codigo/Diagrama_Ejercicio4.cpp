#include <iostream>
#include <string>
using namespace std;

class ReproductorMultimedia{
    public:
    ReproductorMultimedia(){}
};

class ReproductorAudio:public ReproductorMultimedia{
    public:
    void reproducir(){
        cout<<"Se escucha algo en el reproductor de audio"<<endl;
    }
};

class ReproductorVideo:public ReproductorMultimedia{
    public:
    void mostrar(){
        cout<<"Se observa algo en el reproductor de video"<<endl;
    }
};

int main(){
    ReproductorAudio audio;
    ReproductorVideo video;
    video.mostrar();
    audio.reproducir();
}
