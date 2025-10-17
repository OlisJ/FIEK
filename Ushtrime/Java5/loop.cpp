#include <iostream>
using namespace std;


int main(){
    int count=1;
    int prodhimi=1;
    int n;
    cout<<"Vendosni vleren n";
    cin>>n;

    // while(count<=n){
    //     cout<<count<<endl;
    //     count++;
    //     shuma+=count;
    // }

    // cout<<"shuma e numrave prej 0 deri ne"<<n<<"eshte:"<<shuma<<endl;

    while(count<=n){
        cout<<count<<endl;
        prodhimi=prodhimi*count;
        count++;
    }

    cout<<"shuma e numrave prej 0 deri ne "<<n<<" eshte:"<<prodhimi<<endl;



    return 0;
}