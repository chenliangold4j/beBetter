#include <iostream> 
using namespace std;
// 但现在，让我们对程序稍作修改，在 Shape 类中，area() 的声明前放置关键字 virtual，如下所示：
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// 程序的主函数
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   // 存储矩形的地址
   shape = &rec;
   // 调用矩形的求面积函数 area
   shape->area();
   rec.area();
   // 存储三角形的地址
   shape = &tri;
   // 调用三角形的求面积函数 area
   shape->area();
   
   return 0;
}

// 导致错误输出的原因是，调用函数 area() 被编译器设置为基类中的版本，
// 这就是所谓的静态多态，或静态链接 - 函数调用在程序执行前就准备好了
// 。有时候这也被称为早绑定，因为 area() 函数在程序编译期间就已经设置好了。

// 纯虚函数
// 您可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，但是您在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数。

// 我们可以把基类中的虚函数 area() 改写如下：

// class Shape {
//    protected:
//       int width, height;
//    public:
//       Shape( int a=0, int b=0)
//       {
//          width = a;
//          height = b;
//       }
//       // pure virtual function
//       virtual int area() = 0;
// };
// = 0 告诉编译器，函数没有主体，上面的虚函数是纯虚函数。