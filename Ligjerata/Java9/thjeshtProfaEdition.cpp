#include<iostream>
using namespace std;
void EshteThjesht(int n){
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            cout<<"Numer i perbere";
            return;
        }
    }
    cout<<"Numer i thjesht";
}

int main(){
    int n;
    cout<<"Jep nje numer";
    cin>>n;
    EshteThjesht(n);

 
 
 
    return 0;
}