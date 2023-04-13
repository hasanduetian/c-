#include<iostream>
using namespace std;
int main(){

    try{
    int a,b;
    cout<<"enter the first number ";
    cin>>a;
    cout<<"enter the secoend  number ";
    cin>>b;
    if (b==0)
    {
        throw -1;
    }
    
    double div=(double)a/b;
    cout<<"the division is "<<div;

  }
    
    catch(...)
    {
       cout<<"divided by zero is not possibale";
       cout<<"please try again";
    }
   
}