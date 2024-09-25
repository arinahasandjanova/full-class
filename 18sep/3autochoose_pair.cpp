#include <iostream>
#include <string>
#include <utility>
int main(){
	std::pair<std::string, int> p={"Hello", 42};
	auto [word, freq]=p;
	std::cout<<word<<"\n";
	std::cout<<freq<<"\n";
	
	return 0;
}
