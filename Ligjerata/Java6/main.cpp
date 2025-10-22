#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n,i,p;
    cout<<"Vendos vleren e n:";
    cin>>n;
    
    p=1;

    for(i=2; i<=n; i=i+2){
        p = p * i;
    }
    cout<<"Prodhimi:"<<setw(10)<<setfill('N')<<p<<endl;





    return 0;
}