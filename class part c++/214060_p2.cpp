#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int hour,minute,second;
}time_stuct;

void ReadData(time_stuct*3 t) // Taking input Function
{
    int h,m,s;
    cin >> h >> m >> s;
    t -> hour = h, t -> minute = m, t -> second = s;
}
void DisplayData(time_stuct t) // The Display function
{
    cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

// takes two time_struct type data and returns the sum as same type
time_stuct Total_time(time_stuct t1,time_stuct t2)
{
    t1.hour += t2.hour;
    t1.minute += t2.minute;
    t1.second += t2.second;

    if(t1.second >= 60)
        t1.minute++, t1.second -= 60;
    if(t1.minute >= 60)
        t1.hour++, t1.minute -= 60;
    return t1;
}
int main()
{
    time_stuct t1,t2;
    ReadData(&t1);
    ReadData(&t2);
    cout << "Time1 = ";
    DisplayData(t1);
    cout << "Time2 = ";
    DisplayData(t2);

    time_stuct res = Total_time(t1,t2);
    cout << "Addition result ";
    DisplayData(res);

    return 0;
}
