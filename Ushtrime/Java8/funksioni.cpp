#include <iostream>
#include <cmath>
using namespace std;

int kubi(int x){
    return pow(x,3);
}
double mledh( double a, double b, double c){
    return a+b+c;
}


int main (){
    int n =3;
    int m=8;
    int b=12;
    cout<<"kubi per 3:"<<kubi(n)<<endl;
    cout<<"kubi per 8:"<<kubi(m)<<endl;
    cout<<"kubi per 12:"<<kubi(b)<<endl;





    return 0;
}