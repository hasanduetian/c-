#include<iostream>
using namespace std;

// Base class Shape
class Shape {
   protected:
      int height;
      int width;
   public:
    Shape(int x,int y):height(x),width(y){

    }
};
// another Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Derived class
class Rectangle: public Shape, public PaintCost{
   public:
     Rectangle(int x, int y): Shape(x, y){

    }
    int getArea() {
         return (height * width);
    }
};

int main(){ 
  // Shape p(10,12);  
   Rectangle Rect(10, 12);
   int area = Rect.getArea();

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
    return 0;
}
