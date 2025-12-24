#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;

     void print(){
        cout<<x << " "<< y<<endl;
    }
};

class Pointclass{
    
    int x;
    int y;

public:

    Pointclass(int _x, int _y){
        cout<<"U krijua nje pike";
        x=_x;
        y=_y;
    }

    void setX(int _x){
        x=_x;

    }
    void setY(int _y){
        y=_y;

    }


    void print(){
        cout<<x << " "<< y<<endl;
    }
};


int main(){

    Pointclass p1();
    Pointclass p2(3,5);

    

    return 0;
}