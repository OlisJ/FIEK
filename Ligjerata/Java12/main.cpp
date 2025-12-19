#include <iostream>
#include <string>
using namespace std;

class Telefoni{
    private:
    string prodhuesi;
    string ngjyra;
    float pesha;
    float niveli_bateris;
   
    public:
    Telefoni(){
        cout<<"Vendos emrin e prodhuesit";
        getline(cin,prodhuesi);
        cout<<"Vendos ngjyren";
        getline(cin,ngjyra);
        cout<<"Vendos peshen";
        cin>>pesha;
        cout<<"Venods nivelin e batris";
        cin>>niveli_bateris;
    }
    Telefoni(string p, string ngj,float pe, float nb){
        prodhuesi=p;
        ngjyra=ngj;
        pesha=pe;
        niveli_bateris=nb;
    }

    int numroShkronjat(char shkronja){
        int rez=0;
        for( int i=0; i<prodhuesi.length();i++){
            if(prodhuesi[i]==shkronja){
                rez++;
            }
        }
        return rez;
    }
string ktheMesin(string teksti){
    string rez="";
    if(teksti.length()%2==1){
        rez=teksti[teksti.length()/2];
    }else{
        rez+=teksti[teksti.length()/2-1];
    }
    return rez;
}
    float konverto(){
        float rez;
        rez=pesha/1000;
        return rez;
    }
    string kthenivelinB(){
        string rez="";
        if(niveli_bateris==0){
            rez="Nuk kemi bateri";
        }else if (niveli_bateris<10){
            rez="Mbusheni baterin";
        }else{
            for(int i=niveli_bateris;i>=10; i=i-10){
                rez+="|";
            }
        }
        return rez;
    }
    string merrngjyren(){
        return ngjyra;
    }
    void vendosNgjyren(string ngj){
        ngjyra=ngj;
    }

    string merrProdhuesin(){
        return prodhuesi;
    }
};

int main(){
    Telefoni t1;
    cout<<"Pesha ne kg"<<t1.konverto()<<endl;
    cout<<"Mesi i emrit te prodhuesit"<<t1.ktheMesin(t1.merrProdhuesin())<<endl;
    cout<<"mesi i ngjyres"<<t1.ktheMesin(t1.merrngjyren())<<endl;
    cout<<"Niveli i bateris eshte"<<t1.kthenivelinB()<<endl;
    char shkronja;
    cout<<"Jep nje shkronje per tu numruar";
    cin>>shkronja;
    cout<<"numriishkronjave"<< shkronja << "eshte"<<t1.numroShkronjat(shkronja)<<endl;


    return 0;
}