#include<iostream>
using namespace std;
class time 
{
private:
    int hour,minits,second;
public:
    time (){ hour=minits=second=0;}
    time (int h,int m,int s){hour=h;minits=m;second=s;}
  friend time operator -(time t1, time t2){
        return time( t1.hour-t2.hour, t1.minits-t2.minits, t1.second-t2.second );
        
    }
  friend time operator +(time t1, time t2){
      int h= t1.hour+t2.hour;
      int m= t1.minits+t2.minits;
      int s= t1.second+t2.second;
         if (m>60){
                h++; m-=60;
                }
            if (s>=60){
                m++;s-=60;
                }
             if (h>12){
                h=1;
                }
                return time(h,m,s);
    }
     /*eivabeo kora jabe 
      friend time operator +(time t1, time t2){
     time temp;
      temp.hour= t1.hour+t2.hour;
      temp.minits= t1.minits+t2.minits;
      temp.second= t1.second+t2.second;
         if (temp.minits>60){
                temp.hour++; temp.minits-=60;
                }
            if (temp.second>=60){
                temp.minits++; temp.second-=60;
                }
             if (temp.hour>12){
                temp.hour=1;
                }
                return temp ;*/
  bool  operator ==( time t){
        if (hour==t.hour && minits==t.minits&& second&&t.second)
            return 1;
        else
            return 0;        
            }
    void display(){
       
        cout<<hour<<":"<<minits<<":"<<second<<endl;
    }

};




int main(){
    time t1(3,140,12),t2(3,20,30),t3;
    t3=t1-t2;
    t3.display();

    t3=t1+t2;
    t3.display();
    if(t1==t2)cout<<"true";
    else cout<<"false";




    return 0;
}
