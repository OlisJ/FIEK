#include <iostream>
using namespace std;

int main(){
    int n;
    bool eshteNrThjesht=true;
    cout<<"Vendos n:"<<endl;
    cin>>n;

    for(int i=2; i<=n/2; i++ ){
        if (n%i==0){
            eshteNrThjesht=false;
            break;
        }
    }
    if(eshteNrThjesht){
        cout<<"Eshte numer i thjesht"<<endl;
    }else{
        cout<<"Nuk eshte numer i thjesht"<<endl;
    }




    return 0;
}