#include <iostream>
#include <map>
int main(){
	std::multimap<std::string, int> positions;
	std::string word;
	int position = 0;
	while(std::cin>>word){
		positions.insert({word, position});
		++position;
		}
		std::cout<<"\n";
	for(const auto& [word, name] : positions){
		std::cout<<word<<"\t"<<name<<"\n";
		}
	
	return 0;
}
