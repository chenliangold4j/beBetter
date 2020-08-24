#include <iostream>
#include <cstring>
 
using namespace std;
 
// 声明一个结构体类型 Books 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2
 
   // Book1 详述
   strcpy( Book1.title, "c++");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "lauguage");
   Book1.book_id = 12345;
 
   // Book2 详述
   strcpy( Book2.title, "CSS");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "f_end");
   Book2.book_id = 12346;
 
   // 输出 Book1 信息
   cout << "1 title:" << Book1.title <<endl;
   cout << "1 author:" << Book1.author <<endl;
   cout << "1 subject:" << Book1.subject <<endl;
   cout << "1 id:" << Book1.book_id <<endl;
 
   // 输出 Book2 信息
   cout << "2 title:" << Book2.title <<endl;
   cout << "2 author:" << Book2.author <<endl;
   cout << "2 subject:" << Book2.subject <<endl;
   cout << "2 id:" << Book2.book_id <<endl;
 
 
   return 0;
}