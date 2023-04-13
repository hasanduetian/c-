#include<iostream>
using namespace std;
/// constructor 3 prokar: 1. defult 2.paramererwise 3.copy
class constructor{
private:
    int data1,data2,data3;
public:
    // defult constructor
    constructor():data1(0),data2(0){
        cout<<"defult constructor run"<<endl;
    }
    // parameterwise constructor
   /* constructor(int x,int y):data1(x),data2(y){
        // or
        // data1=x;
        // data2=y;
        cout<<"parameteraise constructor run"<<endl;
    }*/
    // constructor with defult arguments
    constructor(int a,int b=5,int c=3):data1(a),data2(b),data3(c){
        // data1=a;
        // data2=b;
        // data3=c;
    }
    // copy constructor
    // when no copyconstrcutor is founf then the compiler supplie their own class defult copy constrcutor 
    constructor(constructor &h){
        cout<<"run copy constructor"<<endl;
            data1=h.data1;
            data2=h.data2;
            data3=h.data3;
        }

  
void printdata(){
    cout<<"the number of data is  "<<endl<<data1<<endl<<data2<<endl<<data3<<endl;
}
void printdata1(){
    cout<<"the number of data is  "<<endl<<data1<<endl<<data2<<endl;
}
    
    };
  

int main(){
constructor c1;
constructor c2(5,10);
constructor c3(7);
c1.printdata1();
c2.printdata();
c3.printdata();
// two type of invoked copy constructor
// firstly
constructor copy(c2);
// scondly
constructor copy1=c3;
copy.printdata();
copy1.printdata();


    return 0;
}
