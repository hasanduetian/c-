#include<iostream>
using namespace std;
// 1 + 3i
// 2 +4i
//-----------
//3 + 7i
// friend function er maddome amra peivate data access korte pari

class complex{
    int a,b;
    public:

    // below line -- its not a member function ..sumcomplex function is allow to do anyting
    // with my private part
    // friend function 
    friend complex sumcomplex(complex r,complex t);

        void setdata(int x,int y){
            a=x;
            b=y;
        }
    void showdata(){
        cout<<a<<" + "<<"i"<<b<<endl;
    }
};
complex sumcomplex(complex r,complex t){
    complex w;
    w.setdata((r.a+t.a),(r.b+t.b));
    return w;
}

int main(){
    complex obj1,obj2,sum;
    obj1.setdata(5,6);
    cout<<"the first complex number:"; obj1.showdata();cout<<endl;
    obj2.setdata(3,5);
    cout<<"the scoend complex number:"; obj2.showdata();cout<<endl;
    sum=sumcomplex(obj1,obj2);
    cout<<"the summation complex number:";sum.showdata();cout<<endl;


    return 0;
}
/* propertis of a class
1. not in the scope of class
2. It is not called for a class object
3. Can be invocked without the help of any object
4. usually contian the objects as arguments
5. it can not output any private variable


*/