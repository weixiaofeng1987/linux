//http://coolshell.cn/articles/1724.html
/*
�ǵģ�������δ������ֻ��main�����е��Ǿ䡰vector<UINT4> foo���������ú����죬Ȼ�������鲢����ô�򵥣����ǿ��Կ���vector, UINT4��foo����Hack���ʵ���������а��Ŀ�ʼ��������������< >�������������������ں�С�ڣ������������ȴ�ֱ������ˡ���ʵ������������ǣ�

1 vector.operator<(UNIT4).operator>(foo); 

���ԣ����е�һ�ж��������ǵ�C++�Ĺ淶���﷨����Ȼ����Ҳ�ܱ�˳������ͨ�������٣����ҵ�G++����û������ģ�����������������н����Ȼ�ǣ�

123 $ ./horrorС�ڲ����� ���ڲ����� 

�ǵģ������ͨ��C++��һ�е�һ�У�����Ȼ�������γ���е����档������������C/C++�������в����ټ���Ҫ����C/C++�Ĵ��벢����һ�����£������������ʤ����ֻҪ������6����̬��C����Hello World�������֪���ˣ����ң�����һ���򵥵Ľ̡̳���μ���/����CԴ���롷������һЩ�򵥵�������

��ô���������һ���ڶ������п�����vector<UINT4> foo������������ֻ��һ���þ���

��ȫ���꣩

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
