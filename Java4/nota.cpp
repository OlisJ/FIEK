#include<iostream>
using namespace std;

int main(){

    int nota;
    cout<<"Nota 10-Shkallore: ";
    cin>>nota;
    switch (nota)
    {
    case 10:
        cout<<"Pershkrimi:Shkelqyeshum"<<endl<<"Nota ETCS:A"<<endl;
        break;
    case 9:
        cout<<"Pershkrimi:Shume mire"<<endl<<"Nota ETCS:B"<<endl;  
        break;
    case 8:
        cout<<"Pershkrimi:Mire"<<endl<<"Nota ETCS:C"<<endl;
        break;
    case 7:
        cout<<"Pershkrimi:Mjaftueshem"<<endl<<"Nota ETCS:D"<<endl;
        break;
    case 6:
        cout<<"Pershkrimi:Kalueshem"<<endl<<"Nota ETCS:E"<<endl;
        break;
    case 5:
         cout<<"Pershkrimi:Deshtim"<<endl<<"Nota ETCS:F"<<endl;
    default:
        cout<<"Gabim"<<endl;
    }

    string statusi=(nota>5 && nota<11) ? "Kaluar":"Deshtuar";
    cout<<"Statusi: "<<statusi;



    return 0;
}