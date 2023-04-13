#include<iostream>
using namespace std;
class baseshape{
protected:
    double h,w;
    public:
    baseshape(double x,double y){h=x;w=y;}
    virtual double area(){cout<<endl<<"this is base class its not a drived class "<<endl;}
};
class drived2D:public baseshape{
    public:
    drived2D(double x,double y):baseshape(h,w){}
    double area(){return h*w;}
};

class drived3D:public drived2D{
protected:
    double len;
    public:
    drived3D(double x,double y,double z):drived2D(h,w){
        len=w;
    }
    double area(){return h*w*len;}
};

int main(){

baseshape *base_pointer;

drived2D d1(20,30);
drived3D d2(1,2,3);

base_pointer=&d1;
cout<<"the is 2D "<<base_pointer->area();

base_pointer=&d2;
cout<<"the is 3D "<<base_pointer->area();

    return 0;
}
