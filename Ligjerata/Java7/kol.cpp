#include <iostream>
#include<math.h>
using namespace std;

int main(){

    int n,njeshif;
    float numri,maks;

    cout<<"shkruani sa numri deshironi";
    cin>>n;
    maks=-pow(2,31);
    njeshif=0;

    for (int i=0;i<n;i++){
        cout<<"Jepni numri"<<i+1<<" :";
        cin>>numri;
        if(numri>maks){
            maks=numri;
        }
        if(numri>-10 && numri<10){
            njeshif++;
        }
    }

    cout<<"maksimalja "<<maks<<endl<<"Numri vlerave njershifrore"<<njeshif<<endl;   
    return 0;
}