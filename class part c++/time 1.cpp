#include <iostream>
using namespace std;

class Time {
private:
  int hour, minute, second;

public:
  Time() {
    hour = minute = second = 0;
  }

  Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  friend Time operator-(const Time& t1, const Time& t2) {
    int h = t1.hour - t2.hour;
    int m = t1.minute - t2.minute;
    int s = t1.second - t2.second;
    if (s > 60) {
      s -= 60;
      m++;
    }
    if (m > 60) {
      m -= 60;
      h++;
    }
    return Time(h, m, s);
  }

  bool operator==(const Time& other) const {
    return hour == other.hour && minute == other.minute && second == other.second;
  }

  void display() const {
    printf("%02d:%02d:%02d\n", hour, minute, second);
  }
};

int main() {
  Time t1;          // default constructor
  Time t2(12, 59, 59);  // add constructor
  Time t3(1, 45, 30);
  Time t4 = t2 - t3;  // overload binary minus (-) operator
  t4.display();
  cout << (t2 == t3) << endl; // overload equal to operator(==)
  return 0;
}
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
                return temp ;
