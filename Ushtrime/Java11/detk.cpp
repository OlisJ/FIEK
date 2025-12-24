#include <iostream>
#include <string>
using namespace std;

class Libri{
public:
    string titulli;
    int nrKopjeveHuazuara;
    int nrKopjeve;


    void Huazimi(){
        nrKopjeveHuazuara++;
        nrKopjeve--;
    }

    double gjendja(){
        return (nrKopjeveHuazuara/ double(nrKopjeveHuazuara+nrKopjeve))*100;
    }


};

int main(){

    Libri l;
    l.titulli="Sikur te isha djal";
    l.nrKopjeve=300;
    l.nrKopjeveHuazuara=0;

    l.Huazimi();
    l.Huazimi();
    l.Huazimi();


    cout<<"Gjendja :"<<l.gjendja()<<"%"<<endl;



    return 0;
}