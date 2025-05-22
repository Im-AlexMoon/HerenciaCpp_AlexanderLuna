#include <iostream>
#include <string>
using namespace std;

class ReproductorMultimedia{
    public:
    ReproductorMultimedia(){}
};

class ReproductorAudio:public ReproductorMultimedia{
    public:
    ReproductorAudio():ReproductorMultimedia(){}
    void reproducir(){
        cout<<"Se escucha algo en el reproductor de audio"<<endl;
    }
};

class ReproductorVideo:public ReproductorMultimedia{
    public:
    ReproductorVideo():ReproductorMultimedia(){}
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
