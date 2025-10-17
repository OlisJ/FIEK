#include <iostream>
using namespace std;

int main(){

    int dita;
    int perseritje=0;
caktoditen:    
    cout<<"Vendose diten e javes(1-7)";
    cin>>dita;

    if(dita>7 || dita<1){
        cout<<"Dita gabim"<<endl;
        perseritje++;
        goto caktoditen;
    }

    cout<<"Perseritjet :" <<perseritje<<endl;
    



    return 0;
}