#include <iostream>
#include <vector>
int main(){
	/*const int c1=42;
	int x;
	std::cin >> x;
	const int c2=2*x;
	//c2=0; //ошибка компиляции
	std::cout<<c1<<" "<<c2<<"\n";*/
	
	/*const std::vector<int> v={1, 3, 5};
	std::cout<<v.size()<<"\n";
	//v.clear;  //ошибка компиляции
	//v[0]=0;   //ошибка компиляции*/
	
	/*int x=42;
	int& ref=x;
	const int& cref=x;
	++x;
	++ref;
	//++cref; //ошибка компиляции
	std::cout<<x<<"\n";
	std::cout<<ref<<"\n";
	std::cout<<cref<<"\n"; //все ранво меняется но не через ссылку а через х
	int* ptr=&x;
	const int* cptr =&x;
	++*ptr;
	//++*cptr; //ошибка компиляции
	int y=10;
	cptr=&y;
	std::cout<<*cptr<<"\n"; */
	const int cx=42;
	//int& ref=cx; //ошибка компиляции
	const int& cref=cx;
	
	//int* ptr=cx; //ошибка компиляции
	const int* cptr=&cx;
	
	std::cout<<*cptr<<"\n";
	std::cout<<cref<<"\n";
	
	return 0;
}
