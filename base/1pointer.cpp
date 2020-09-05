#include <iostream>
 
//  g++ -S 可以生成汇编
//  gcc -S -masm=intel .\1pointer.cpp 使用intel汇编
using namespace std;
//取地址
int main ()
{
   int  var1;
   char var2[10];
 
   cout << "var1 address ";
   cout << &var1 << endl;
 
   cout << "var2 address ";
   cout << &var2 << endl;
 
   return 0;
}