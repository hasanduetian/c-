#include<iostream>
using namespace std;

class student{
private:
    int a,b,c;

 public:
     int id;
     double gpa;
     void getdata(int x,int y, int z);

     // function in class
     void dispaly(){
     cout<<id<<endl<<gpa<<endl<<a<<endl<<b<<endl<<c<<endl;
     }
     // function
     void setvalue(int x,double y){
       id=x;
       gpa=y;

     }};
    void student::getdata(int x, int y,int z){
        a=x;
        b=y;
        c=z;

    }


int main(){
 student hasan, safiul;
 hasan.getdata(5,6,7);

 hasan.setvalue(10,3.87);
 hasan.dispaly();

 safiul.setvalue(30,4.00);
 safiul.dispaly();
}
