#include <iostream>
#include <string>
#include <vector>
#include <string_view>

int main(){
	/*std::string s {"Hello, world!"};
	auto sub=s.substr(7);
	sub[0]='W';
	std::cout<<sub<<"\n";
	std::cout<<s<<"\n";*/
	
	/*std::string s {"Hello, world! How do you do?"};
	std::string_view sv=s;
	sv.remove_prefix(7);
	sv.remove_suffix(16);
	std::cout<<sv<<"\n";
	std::cout<<s<<"\n";*/
	
	std::vector<std::string_view> lines;
	for(int i=0; i!=5; ++i){
		std::string line;
		std::getline(std::cin, line);
		lines.push_back(line);
	}
	for(auto item: lines){
		std::cout<<item<<"\n";
		}
	
	return 0;
}
