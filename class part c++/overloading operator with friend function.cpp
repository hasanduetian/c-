#include<iostream>
using namespace std;

// = () -> [] ....friend function er madome ai operator gula overload korte pari na
// because ei gula this pointer use koer but friend function pointer use kore na
class number{
int x,y;
public:
    number():x(0),y(0){}
    number(int a,int b):x(a),y(b){}
    void printdata(){cout<<x<<" "<<y<<endl;}
     friend number operator  +(number ob1,number ob2 );
       friend number operator  -(number ob1,number ob2 );

    //  binary operator overload
}; 
    number operator  +(number ob1,number ob2 ){                                     // eikhane prothon value ta this pointer er  maddone 
    number temp;            
    temp.x= ob1.x + ob2.x;
    temp.y= ob1.y + ob2.y;
    return temp;

    } 
  number operator  -(number ob1,number ob2 ){                                     // eikhane prothon value ta this pointer er  maddone 
    number temp;            
    temp.x= ob1.x - ob2.x;
    temp.y= ob1.y - ob2.y;
    return temp;

    }

int main(){
    number n1(30,40),n2(20,50),n3;
    n3=n1+n2;
    cout<<"the summation data is: ";
    n3.printdata();cout<<endl;
    n3=n1-n2;
    cout<<"the summation data is: ";
    n3.printdata();cout<<endl;
   
    return 0;
}
