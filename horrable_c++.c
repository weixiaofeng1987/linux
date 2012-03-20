//http://coolshell.cn/articles/1724.html
/*
是的，上面这段代码如果只看main函数中的那句“vector<UINT4> foo”，你会觉得很眼熟，然而，事情并非那么简单，我们可以看到vector, UINT4和foo都是Hack类的实例，这就是邪恶的开始，那两个尖括号< >则成了两个运算符，大于和小于，这两个运算符却又被重载了。其实，真正的语句是：

1 vector.operator<(UNIT4).operator>(foo); 

所以，所有的一切都符合我们的C++的规范和语法，自然程序也能被顺利编译通过（至少，在我的G++上是没有问题的）。而整个程序的运行结果自然是：

123 $ ./horror小于操作符 大于操作符 

是的，如果你通晓C++的一切的一切，你自然不会对这段程序感到惊奇。这样的事情在C/C++的世界中并不少见，要搞乱C/C++的代码并不是一件难事，花样多得数不胜数，只要看看《6个变态的C语言Hello World程序》你就知道了，而且，还有一个简单的教程《如何加密/混乱C源代码》告诉你一些简单的做法。

那么，如果你有一天在读程序中看到“vector<UINT4> foo”，你会觉得那只是一个幻觉吗？

（全文完）

*/
#include <iostream> 
#include <vector>   

typedef int UINT4; 
using namespace std; 

class Hack { };  

Hack& operator< (Hack &a , Hack &b) 
{    
 std::cerr << "xiaoyu caozuofu\n";     
return a; 
}  

 Hack& operator> (Hack &a, Hack &b) 
{     std::cerr <<  "dayu caozuofu\n";    
 return a;
 }   

int main(int argc, char ** argv) 
{     
	Hack vector;    
	Hack UINT4;     
	Hack foo;       
	vector<UINT4> foo;   
	return(0); 
} 
