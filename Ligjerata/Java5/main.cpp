#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){

    // int a=3.5  ,  b=2;
    // float  c =a+b;
    // if (c*2<11){
    //     cout<<c-1<<endl;
    // }else{
    //     cout<<++b<<endl;
    // }

    float pike1, pike2, pike3, mesatarja,varienca;
    string kategoria_lojtarit;

    cout<<"Shkruani piket e shenuara per 3 ndeshjet"<<endl;
    cin>>pike1>>pike2>>pike3;
    mesatarja =(pike1+pike2+pike3)/3;
    varienca=(pow(pike1-mesatarja,2)+pow(pike2-mesatarja,2)+pow(pike3-mesatarja,2)/3);

    switch (static_cast<int>(varienca))
    {
    case 0 ...5:
        kategoria_lojtarit="Konsistent";
        break;
    case 6 ...10:
        kategoria_lojtarit="Mesatar";
        break;
    
    default:
    kategoria_lojtarit="Inkonsistent";
        break;
    }

    cout<<"Varienca e pikeve"<<varienca<<endl;
    cout<<"Katregoria e Lojtarit"<<kategoria_lojtarit<<endl;



    return 0;
}