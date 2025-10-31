#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int c;
    int n;
    
    cout<<"Vendos n: ";
    cin>>n;

    cout<<a<<endl; 
    cout<<b<<endl;
    
    while(b <= n){
        c=a+b;
        if(c > n) break;
        cout<<c<< endl;
        a = b;
        b = c;
    }
    
    return 0;
}