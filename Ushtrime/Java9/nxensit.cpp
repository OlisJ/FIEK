#include <iostream>
using namespace std;

int totalnxenes=0;
int kapshkolles=195;

void shfaqtotalin(){
    cout<<totalnxenes;
}
void shtoNx(int n){
    if(totalnxenes+n>kapshkolles){
        cout<<"Nuk ka kapacitet";
        return;
}totalnxenes+=n;}

void largoNx(int n){
    totalnxenes-=n;

}

int vende(){
    return kapshkolles-totalnxenes;
}

void shfaqstatistika(){
    cout<<totalnxenes<<endl;
    cout<<vende()<<endl;
}


int main(){

    shfaqtotalin();


    return 0;
}