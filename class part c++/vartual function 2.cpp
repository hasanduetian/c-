#include<iostream>
using namespace std;
class bases{
 
    public:
       int base=1;
       virtual void display(){
            cout<<"this is base class"<<base<<endl;
        }
};
class drived:public bases{
   
    public:
     int drived=2;
        void display(){
            cout<<"this is drived class"<<drived<<endl;
        }
};
class drived1:public bases{
   
    public:
     int drived1=3;
        void display(){
            cout<<"this is drived1 class"<<drived1<<endl;
        }
};

int main(){
bases *b;
bases c;
drived d;
drived1 e;
 b->base=30;
 b->display();
 
 
 b=&d;
 b->display();
 b=&e;
 b->display();




    return 0;
}
