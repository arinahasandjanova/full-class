#include <iostream>
#include <string>
#include <vector>

std::string Concatenate(const std::vector<std::string>& parts){
	std::string result;
	for(const auto& part: parts){
		result+=part;
	}
	return result;
}
int main(){
	
	std::vector<std::string> parts={"ab", "ra", "ca", "da", "bra"};
	std::cout<<Concatenate(parts)<<"\n";
	
	return 0;
}
