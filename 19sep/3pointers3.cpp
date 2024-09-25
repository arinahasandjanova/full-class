#include <iostream>
#include <vector>
#include <string>
int main(){
	/*int* ptr=nullptr;
	
	{
		int x=42;
		ptr=&x;
	}
	
	std::cout<<*ptr<<"\n";*/
	
	std::vector<std::string> words={"one", "two", "three"};
	std::string& ref=words[0];
	words.clear();
	std::cout<<ref<<"\n"; //undefined
	
	return 0;
}

