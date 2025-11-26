#include <iostream>
using namespace std;

double mesatarjavek(int V[],int n){
    double s = 0;
    for( int i = 0 ; i < n ; i++){
        s=s+V[i];
    }
    return s/n;
}   

int main (){
    int A[]={10,20,30};
    cout<<mesatarjavek(A,3);

    return 0;
}