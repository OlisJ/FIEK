#include<iostream>
using namespace std;

int main(){

    int dita;
    cout<<"Vendos diten e javes (1-7)"<<endl;
    cin>>dita;
    switch (dita)
    {
    case 1:
        cout<<"E Hene";
        break;
    case 2:
        cout<<"E Marte";  
        break;
    case 3:
        cout<<"E Merkure";
        break;
    case 4:
        cout<<"E Enjte";
        break;
    case 5:
        cout<<" E Premte";
        break;
    case 6:
        cout<<"E Shtune";
        break;
    case 7:
        cout<<'E Diele';
        break;
    default:
        cout<<"Dita eshte vendosur gabim"<<endl;

    }
    


    return 0;
}