#include<bits/stdc++.h>
using namespace std;
class Point{
private:
    double x,y,z;
public:
    Point() {x = y = z = 0;}
    Point(double a,double b,double c) {x = a,y = b,z = c;}
    void display()
    {
        cout <<"("<< x << "," << y << "," << z <<")"<< endl;
    }
    // + operator overloaded for (object + object)
    Point operator +(Point p2)
    {
        return Point(x+p2.x, y+p2.y, z+p2.z);
    }
    //  * operator overloaded for (constant * object)
    friend Point operator *(Point p,double c);

    // * operator overloaded for (object * object)
    Point operator *(Point p2)
    {
        return Point(x*p2.x, y*p2.y, z*p2.z);
    }

    // - operator overloaded for negation
    Point operator -()
    {
        return Point(-x, -y, -z);
    }
};

// definition of the negation operation
Point operator * (Point p,double c)
{
    return Point(p.x*c, p.y*c, p.z*c);
}
int main()
{

    Point p1(5,-2,10),p2(10,25,0), result, mult;
    result = p1 + p2;
    result.display();

    result = p1 * p2;
    result.display();

    mult = p1*10;
// or    mult = 10*p1;
    mult.display();

    result = -p2;
    result.display();

    return 0;
}
