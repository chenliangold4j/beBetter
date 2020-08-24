#include <iostream>
using namespace std;
 
class printData
{
   public:
      void print(int i) {
        cout << "int:" << i << endl;
      }
 
      void print(double  f) {
        cout << "float: " << f << endl;
      }
 
      void print(char c[]) {
        cout << "char[]: " << c << endl;
      }
};
 
int main(void)
{
   printData pd;
 
   // 输出整数
   pd.print(5);
   // 输出浮点数
   pd.print(500.263);
   // 输出字符串
   char c[] = "hello c++";
   pd.print(c);
 
   return 0;
}