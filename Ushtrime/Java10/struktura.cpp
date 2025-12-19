#include <iostream>
#include <string>
using namespace std;

struct Studenti{
    string emri;
    string mbiemri;
    string id;

    void printo(){
        cout<<"Emri:"<<emri<<endl;
        cout<<"Mbiemri:"<<mbiemri<<endl;
        cout<<"Id:"<<id<<endl;
    }

};

int main(){
    Studenti s1 = {"Olis","Jashari","12345"};
    Studenti s2 = {"Sara","Jashari","54321"};

    s1.printo();


  


    return 0;
}