#include <iostream>
#include <algorithm>
#include <string>
int main(){
	std::string s="No lemon, no melon!";
	
	//std::cout<<std::count_if(s.begin(), s.end(), [](char c){return 'A'<=c&&c<='Z';})<<"\n";
	
	std::reverse(s.begin(), s.end());
	std::cout<<s<<"\n";
	
	return 0;
}
