#include <iostream>
#include <string>
int main(){
	/*int x=42;
	int& ref=x; //ссылка на х
	++x;
	std::cout<<ref<<"\n";*/
	
	/*std::string s1="Elementary";
	std::string& s2=s1;
	s1.clear();
	std::cout<<s2.size()<<"\n";*/
	
	/*int x=42;
	int& ref=x;
	int y=20;
	ref=y;
	std::cout<<x<<"\n";*/
	
	int x=42;
	int* ptr=&x;
	++x;
	std::cout<<*ptr<<"\n"; //без * выдает что-то странное адресс?
	
	return 0;
}
