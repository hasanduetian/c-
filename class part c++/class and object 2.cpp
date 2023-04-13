#include<iostream>
#include<string>
using namespace std;


class binary{
 string s;
 public:
     void read(void);
     void check(void);
     void ones_compliment(void);
     void display(void);



};

void binary::read(void){
        cout<<"enter a string:"<<endl;
        cin>>s;

}
void binary::check(void){
    for(int i=0;i<s.length();i++){

        if (s.at(i)!='0'&& s.at(i)!='1')
            cout<<"this is not binary formate"<<endl;
            exit (0);
    }
}
void binary::ones_compliment(void){
   for (int i=0; i < s.length(); i++){

      if(s.at(i)=='0'){
         s.at(i)='1';
     }
     else{
         s.at(i)='0';
         }
     }
    cout<<endl;
}
void binary::display(void){
    cout<<"print your binary number :"<<endl;
      for (int i=0;i<s.length();i++){
       cout<<s.at(i);
  }
}

int main(){
    binary b;
    b.read();
    b.display();
    b.check();
    b.ones_compliment();
    b.display();



return 0;
}
