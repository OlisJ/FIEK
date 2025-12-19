#include <iostream>
#include <string>
using namespace std;

struct Drejtkendshi{
    int gjatsia;
    int gjersia;

    void siperfaqja(){
        cout<<gjatsia*gjersia<<endl;
    };

    void perimetri(){
        cout<< 2*(gjatsia*gjersia)<<endl;
    }

    void eshtekatror(){
        if(gjatsia == gjersia){
            cout<<"Eshte katror";
        }else{
            cout<<"Eshte drejtkendesh"<<endl;
        }
    }


};

int main(){
   
    Drejtkendshi d1={10,5};
    d1.perimetri();
  


    return 0;
}