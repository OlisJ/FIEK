#include <iostream>
#include <string>
using namespace std;

class Libri{
    int id;
    int nr_faqeve;

    public:
    string emri;
    string autori;

    //b

    Libri(){
        cout<<"U krijua nje liber";
    }

    //c

    Libri(int _id, int _nr_faqeve, string _emri, string _autori ){
        cout<<"U krijua nje liber me parametra";
        id=_id;
        nr_faqeve=_nr_faqeve;
        emri=_emri;
        autori=_autori;
    }

    // d

    void setid(int _id){
        id=_id;

    }

    void setnr(int _nr_faqeve){
        nr_faqeve=_nr_faqeve;

    }

    int getid(){
        return id;
    }

    int getnrfaqeve(){
        return nr_faqeve;
    }

    void print(){
        cout<<id << " "<<nr_faqeve;
    }

    
    
};


int main(){
    //e
    Libri l1;
    l1.setid(4);
    l1.setnr(235);

    //f
    Libri l2(1,50,"Liber","Sara");



    return 0;
}