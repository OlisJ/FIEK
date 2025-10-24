#include <iostream>
using namespace std;

int main(){

    //printo numrat tek
    //mos i printo numrat 10 deri ne 30
    // Maksimumi le te jete 301

    int n;
    int count=1;
    cout<<"Vendos vleren n";
    cin>>n;
    

    while (count<=n)
    {
        if(count>=10 && count<=30){
            count++;
            continue;
        }

        if(count%2==1){
            cout<<count<<endl;
        }
        count++;
        

        if(count=301){
            break;
        }
    
    }

    return 0;
}