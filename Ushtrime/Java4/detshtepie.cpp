#include <iostream>
#include <string>
using namespace std;

int main(){

    int age;
    int dita;
    float cmimi_baze = 8.00f;
    float cmimi = cmimi_baze;
    float cdite=cmimi;
    string sym = "€";

    cout<<"Jepni moshen e juaj: ";
    cout<<endl<<"Dita e  javes (1-7): "<<endl;
    cin>>age>>dita;

    if(age<12){
        cmimi = cmimi_baze * 0.5f;
    }else if(age>12 && age<19){
        cmimi = cmimi_baze * 0.7f;
    }else if(age>65){
        cmimi=cmimi_baze*0.6f;
    }else{
        cmimi=cmimi_baze;
    }

    switch (dita)
    {
    case 1:
        cdite=cmimi * 0.8f;
        break;
    case 2:
        cdite=cmimi * 0.8f;
        break;
    case 3:
        cdite=cmimi * 0.8f;
        break;
    case 4:
        cdite=cmimi * 0.8f;
        break;
    case 5:
        cdite=cmimi * 0.8f;
        break;
    
    default:
        cdite=cmimi;
        break;
    }
     
    double zbm=cmimi_baze-cmimi;
    double zbd=cmimi-cdite;

    cout<<"Cmimi Baze: "<<cmimi_baze<<sym<<endl;
    cout<<"Zbritja e Moshes: "<<zbm<<sym<<endl;
    cout<<"Zbritje dite: "<<zbd<<sym<<endl;
    cout << "Per te paguar: " << cdite<<sym << endl;
    
    return 0;
}