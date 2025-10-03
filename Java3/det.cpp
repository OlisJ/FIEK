#include<iostream>
using namespace std;

int main(){
    double num1;
    double num2;
    
    cout<<"numri 1"<<endl;
    cin>>num1;
    cout<<" numri 2"<<endl;
    cin>>num2;

    if(num1>num2){
        cout<<num1<<"eshte me i madh se "<<num2;
    }else if (num2>num1)
    {
        cout<<num1<<"eshte me i vogel se "<<num2;
    }else{
        cout<<num1<<"eshte i barabart me  "<<num2;
    }
    

    
    
    return 0;
}