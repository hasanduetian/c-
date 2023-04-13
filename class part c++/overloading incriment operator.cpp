#include<iostream>
using namespace std;
class over{
    int x,y;
    public:
     over():x(0),y(0){}
     over(int a,int b):x(a),y(b){}
    // pre incriment operator overloading 
     void operator ++(){
        ++x; ++y;}
     //for post incriment operator overloading 
      void operator ++(int){
        x++; y++; }
     // pre decriment operator overloading 
     void operator --(){
        --x; --y; }
     //for post decriment operator overloading 
      void operator --(int){
        x--; y--;}
        // for negative value
      over operator -(){
        return over (-x,-y);
        }

    void printdata(){
        cout<<x<<"  "<<y<<endl;}


};

int main(){
 over v1(1,2),v2;
 cout<<"before incriment     :";v1.printdata();
 ++v1;
 cout<<"for pre incriment    :";v1.printdata();
 v1++;
 cout<<"for post incriment   :";v1.printdata();
 --v1;
 cout<<"for pre decriment    :";v1.printdata();
 v1--;
 cout<<"for post decriment   :";v1.printdata();
 v2=-v1;
 cout<<"for negative value   :";v2.printdata();





    return 0;
}
