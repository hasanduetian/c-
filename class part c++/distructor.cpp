#include<iostream>
using namespace std;
class hasan{

public:
    hasan();
    ~hasan();
    void printdata();
};

hasan::hasan(){
    cout<<"here constructor is invocked"<<endl;

}
hasan::~hasan(){
    cout<<"here distrucot is invocked"<<endl;
}
void hasan::printdata(){
    cout<<"display is called  "<<endl;
}
int main(){
hasan h1;
h1.printdata();


    return 0;
}
