#include<iostream>
using namespace std;
/* note  : Inharitance khwkhono private data access korte pare na eita hy public na hoy protected 
data access korte pare */
//parent class
class shape{
protected:
    int heigth,width;
public:
      shape(int w,int h){
        heigth=h;
        width=w;
        cout<<"base constructor called"<<endl;
    }
  /*  void setwidth(int w){
    width=w;
    }
    void setheight(int h){
    heigth=h;
    }*/
};
// drived class
// for 2D
class rectangle2D : public shape{   /// rectangle 2D inharite korce shape class er object ke
public :
    rectangle2D(int w,int h):shape(w,h){   // constructor theke value niyeci
               cout<<"driver 2Dconstructor callde"<<endl;
               }
    int getarea(){
    return(width * heigth);
    }

};


// for 3D
class rectangle3D : public rectangle2D{   // inharite korce rectangle 2D class ke
protected :
    int length;
public :
    rectangle3D(int w,int h,int len):rectangle2D(w,h){   // constructor theke value niyeci
        length =len;
               cout<<"driver 3Dconstructor callde"<<endl;
               }
    /*rectangle2D(int w,int h){
        height=h;
        width=w;
    }*/
    int getvolume(){
    return(width * heigth*length);
    }

};

// for 4D
class rectangle4D : public rectangle3D{   //multilevel inharitance...... inharite korce rectangele 3D class ke    
protected :
    int timer;
public :
    rectangle4D(int w,int h,int len,int t):rectangle3D(w,h,len){   // constructor theke value niyeci
        timer=t;
               cout<<"driver 4Dconstructor callde"<<endl;
               }
    /*rectangle2D(int w,int h){
        height=h;
        width=w;
    }*/
    int getvolume4D(){
    return(width * heigth*length*timer);
    }

};
int main(){
rectangle3D rect(10,5,2);
rectangle4D rect1(10,5,2,5);
rectangle2D rect2(10,5);                                                                                                                                                                                            
//rect.setheight(10);
cout<<"totla volume of 2D:"<<rect2.getarea()<<endl<<endl;
cout<<"totla volume of 3D:"<<rect.getvolume()<<endl<<endl;
cout<<"totla volume of 4D:"<<rect1.getvolume4D()<<endl<<endl;
//cout<<"totla area:"<<rect.getvolume()<<endl;
//cout<<"totla area:"<<rect.ge4d()<<endl;

return 0;
}
