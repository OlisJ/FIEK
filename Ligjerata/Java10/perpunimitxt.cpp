#include <iostream>
#include <string>
using namespace std;

string kthedyshkronja(string teksti);

int main(){
    string teksti;
    cout<<"Jep tekstin"<<endl;
    getline(cin, teksti);

    cout<<"Simbolet skajore jane :"<< kthedyshkronja(teksti)<<endl;


    return 0;
}


string kthedyshkronja(string teksti){
    string rezultati="";

    rezultati+=teksti[0];
    rezultati+=teksti[teksti.length()-1];

    return rezultati;
}