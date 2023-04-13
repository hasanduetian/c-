#include<iostream>
using namespace std;
class condition
{
 int x,y;
    public:
     condition():x(0),y(0){}
     condition(int a,int b):x(a),y(b){}
     void printdata(){
        cout<<x<<"  "<<y<<endl;}
    // condditonal operator overloading 
        bool operator && (condition obj);
    // assignment operator overloading 
    condition operator =(condition obj);
};
// conditional operator 
bool condition:: operator && (condition obj){
    return ((x && y) && (obj.x && obj.y));
}
// assignment operator overloading 
condition condition:: operator =(condition obj){
   return condition ( x=obj.x, y=obj.y);
}

int main(){
    condition con1(5,1),con2(2,3),n;
    // conditional operator overloading 
    if(con1 && con2){

        cout<<"true";
    }
    else{

       cout<<"false";
    }    
    cout<<endl;
    con1.printdata();
    con2.printdata();
    n=con2=con1;
    con1.printdata();
    con2.printdata();
    n.printdata();

    return 0;
}
