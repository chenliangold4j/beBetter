// 定义命名空间
// 命名空间的定义使用关键字 namespace，后跟命名空间的名称，如下所示：

// namespace namespace_name {
//    // 代码声明
// }
// 为了调用带有命名空间的函数或变量，需要在前面加上命名空间的名称，如下所示：

// name::code;  // code 可以是变量或函数

#include <iostream>
using namespace std;
 
// 第一个命名空间
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// 第二个命名空间
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}
int main ()
{
 
   // 调用第一个命名空间中的函数
   first_space::func();
   
   // 调用第二个命名空间中的函数
   second_space::func(); 
 
   return 0;
}

// using 指令
// 您可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称。

// 实例
// #include <iostream>
// using namespace std;
 
// // 第一个命名空间
// namespace first_space{
//    void func(){
//       cout << "Inside first_space" << endl;
//    }
// }
// // 第二个命名空间
// namespace second_space{
//    void func(){
//       cout << "Inside second_space" << endl;
//    }
// }
// using namespace first_space;
// int main ()
// {
 
//    // 调用第一个命名空间中的函数
//    func();
   
//    return 0;
// }
// using 指令也可以用来指定命名空间中的特定项目。例如，如果您只打算使用 std 命名空间中的 cout 部分，您可以使用如下的语句：

// using std::cout;

// 不连续的命名空间
// 命名空间可以定义在几个不同的部分中，因此命名空间是由几个单独定义的部分组成的。一个命名空间的各个组成部分可以分散在多个文件中。

// 所以，如果命名空间中的某个组成部分需要请求定义在另一个文件中的名称，则仍然需要声明该名称。下面的命名空间定义可以是定义一个新的命名空间，也可以是为已有的命名空间增加新的元素：

// namespace namespace_name {
//    // 代码声明
// }
// 嵌套的命名空间
// 命名空间可以嵌套，您可以在一个命名空间中定义另一个命名空间，如下所示：

// namespace namespace_name1 {
//    // 代码声明
//    namespace namespace_name2 {
//       // 代码声明
//    }
// }
// 您可以通过使用 :: 运算符来访问嵌套的命名空间中的成员：

// // 访问 namespace_name2 中的成员
// using namespace namespace_name1::namespace_name2;
 
// // 访问 namespace:name1 中的成员
// using namespace namespace_name1;

// 在上面的语句中，如果使用的是 namespace_name1，那么在该范围内 namespace_name2 中的元素也是可用的，如下所示：

// 实例
// #include <iostream>
// using namespace std;
 
// // 第一个命名空间
// namespace first_space{
//    void func(){
//       cout << "Inside first_space" << endl;
//    }
//    // 第二个命名空间
//    namespace second_space{
//       void func(){
//          cout << "Inside second_space" << endl;
//       }
//    }
// }
// using namespace first_space::second_space;
// int main ()
// {
 
//    // 调用第二个命名空间中的函数
//    func();
   
//    return 0;
// }
// 当上面的代码被编译和执行时，它会产生下列结果：

// Inside second_space