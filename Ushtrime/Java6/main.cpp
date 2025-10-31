#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int piket[4]={90,80,70,88};
    double piket1[4]={90.5, 80.5 , 70.5 , 60.5};
    const int madhesia =4;
    double shuma=0;


    int piket2[madhesia]={1,2,3,4};

    for (int i=0;i<madhesia;i++){ 
        cout<<piket[i];
        shuma+=piket[1];
    }
    
    cout<<"shuma e pikeve eshte : "<<shuma<<endl;

    double mesatarja= shuma/madhesia;

    cout<<"Mesatarja eshte: "<<mesatarja;


    return 0;
}