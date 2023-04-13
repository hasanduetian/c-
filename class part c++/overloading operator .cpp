#include<iostream>
using namespace std;
class number
{
int x,y;
public:
    number():x(0),y(0){}
    number(int a,int b):x(a),y(b){}
    void printdata(){cout<<x<<" "<<y<<endl;}

    //  binary operator overload
    number operator +(number ob);  
    number operator -(number ob);  
    number operator *(number ob);  
    number operator /(number ob); 
    number operator %(number ob);
    // retional operator overloading 
    bool operator >(number ob); // relational op boolean type data return kore
    bool operator <(number ob);
    bool operator ==(number ob);
};
// binary operator overloading 
number number::operator + (number ob) // ei khane sudu akta parameter dite hoy porerta mane n2
{                                     // eikhane prothon value ta this pointer er  maddone 
            //defult hisabe nye ney ar porer ta je class er object sei classer name er madomedite hoy 
    number temp;            //and here number is a return type
    temp.x= x + ob.x;
    temp.y= y + ob.y;
    return temp;

}
number number::operator - (number ob) {                                                
    number temp;            
    temp.x= x - ob.x;
    temp.y= y - ob.y;
    return temp;

}
number number::operator * (number ob) {                                                
    number temp;            
    temp.x= x * ob.x;
    temp.y= y * ob.y;
    return temp;

}
number number::operator / (number ob) {                                                
    number temp;            
    temp.x= x / ob.x;
    temp.y= y / ob.y;
    return temp;

}
number number::operator % (number ob) {                                                
    number temp;            
    temp.x= x % ob.x;
    temp.y= y % ob.y;
    return temp;

}
// relational operator overloadin declaration
bool number::operator >(number ob){
    return (x+y) > (ob.x+ob.y);
}
bool number::operator <(number ob){
    return (x+y) < (ob.x+ob.y);
}
bool number::operator ==(number ob){
    return (x+y) == (ob.x+ob.y);
}

int main(){
    number n1(30,40),n2(20,50),n3;
    n3=n1+n2;
    cout<<"the summation data is: ";
    n3.printdata();cout<<endl;

    n3=n1-n2;
    cout<<"the substruction data is: ";
    n3.printdata();cout<<endl;

    n3=n1*n2;
    cout<<"the multiplication data is: ";
    n3.printdata();cout<<endl;

    n3=n1/n2;
    cout<<"the devision data is: ";
    n3.printdata();cout<<endl;
    
    n3=n1%n2;
    cout<<"the modulas data is: ";
    n3.printdata();cout<<endl;
    cout<<endl;

    // for relational operator
    if (n1>n2) cout<<"The big number is = n1";
    else if(n1==n2) cout<<"the number are equal : n1=n2";
    else cout<<"else the big number is : n2";
    return 0;
}
