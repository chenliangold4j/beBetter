// 打开文件
// 在从文件读取信息或者向文件写入信息之前，必须先打开文件。ofstream 和 fstream 对象都可以用来打开文件进行写操作，如果只需要打开文件进行读操作，则使用 ifstream 对象。

// 下面是 open() 函数的标准语法，open() 函数是 fstream、ifstream 和 ofstream 对象的一个成员。

// void open(const char *filename, ios::openmode mode);
// 在这里，open() 成员函数的第一参数指定要打开的文件的名称和位置，第二个参数定义文件被打开的模式。

// 模式标志	描述
// ios::app	追加模式。所有写入都追加到文件末尾。
// ios::ate	文件打开后定位到文件末尾。
// ios::in	打开文件用于读取。
// ios::out	打开文件用于写入。
// ios::trunc	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
// 您可以把以上两种或两种以上的模式结合使用。例如，如果您想要以写入模式打开文件，并希望截断文件，以防文件已存在，那么您可以使用下面的语法：

// ofstream outfile;
// outfile.open("file.dat", ios::out | ios::trunc );
// 类似地，您如果想要打开一个文件用于读写，可以使用下面的语法：

// ifstream  afile;
// afile.open("file.dat", ios::out | ios::in );
// 关闭文件
// 当 C++ 程序终止时，它会自动关闭刷新所有流，释放所有分配的内存，并关闭所有打开的文件。但程序员应该养成一个好习惯，在程序终止前关闭所有打开的文件。

// 下面是 close() 函数的标准语法，close() 函数是 fstream、ifstream 和 ofstream 对象的一个成员。

// void close();

#include <fstream>
#include <iostream>
using namespace std;
 
int main ()
{
    
   char data[100];
 
   // 以写模式打开文件
   ofstream outfile;
   outfile.open("afile.dat");
 
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);
 
   // 向文件写入用户输入的数据
   outfile << data << endl;
 
   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // 再次向文件写入用户输入的数据
   outfile << data << endl;
 
   // 关闭打开的文件
   outfile.close();
 
   // 以读模式打开文件
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 
 
   // 在屏幕上写入数据
   cout << data << endl;
   
   // 再次从文件读取数据，并显示它
   infile >> data; 
   cout << data << endl; 
 
   // 关闭打开的文件
   infile.close();
 
   return 0;
}

// 文件位置指针
// istream 和 ostream 都提供了用于重新定位文件位置指针的成员函数。这些成员函数包括关于 istream 的 seekg（"seek get"）和关于 ostream 的 seekp（"seek put"）。

// seekg 和 seekp 的参数通常是一个长整型。第二个参数可以用于指定查找方向。查找方向可以是 ios::beg（默认的，从流的开头开始定位），也可以是 ios::cur（从流的当前位置开始定位），也可以是 ios::end（从流的末尾开始定位）。

// 文件位置指针是一个整数值，指定了从文件的起始位置到指针所在位置的字节数。下面是关于定位 "get" 文件位置指针的实例：

// // 定位到 fileObject 的第 n 个字节（假设是 ios::beg）
// fileObject.seekg( n );
 
// // 把文件的读指针从 fileObject 当前位置向后移 n 个字节
// fileObject.seekg( n, ios::cur );
 
// // 把文件的读指针从 fileObject 末尾往回移 n 个字节
// fileObject.seekg( n, ios::end );
 
// // 定位到 fileObject 的末尾
// fileObject.seekg( 0, ios::end );