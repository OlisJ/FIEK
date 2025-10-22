#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n,i,p,k;
    cout<<"Vendos vleren e n:";
    cin>>n;
    cout<<"Cilin numer me i vogel se "<<n<<" deshironi te perjashtoni:"<<endl;
    cin>>k;
    i=2;
    p=1;

    do{
        if(i!=k)
        p=p*i;
        cout<<"Test \n";
        i=i+2;
    }
    while(i<=n);
    cout<<"Prodhimi:"<<setw(10)<<setfill('N')<<p<<endl;

    return 0;
}