#include <iostream>
using namespace std;
enum Makina {
        Veture,
        Kamion,
        Autobus
    };

void pershkruajmakinen(Makina m){
    if(m == Veture){
        cout<<"Makina eshte nje vetur";
    }else if (m == Kamion)
    {
        cout<<"Makina eshte nje kamion";
    }else if(m == Autobus){
        cout<<"Makina eshte nje autobus";
    }
    
}




int main(){
    pershkruajmakinen(Veture);


    return 0;
}