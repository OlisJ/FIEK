#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main (){
    const int n=7;
    float cmimet[n];
    float mes,shuma;
    int mbi_mes;


    for(int i=0;i<n;i++){
        cout<<"Jep cmimin per produktin"<<i+1<<" :";
        cin>>cmimet[i];
    }

    shuma=0;
    for(int i=0;i<n-1;i++){
        shuma=shuma+cmimet[i];
    }
    mes=shuma/n;

    mbi_mes=0;
    for(int i=0;i<=n-1;i++){
        if(cmimet[i]>mes){
            mbi_mes++;
        }
    }
    cout<<"mesatarja"<<mes<<endl
    <<"Numri i vleratve mbi mesataren eshte"<<mbi_mes<<endl;





    return 0;
}