#include <iostream>
#include <iterator>
#include <map>
#include <string>
int main(){
	std::map<int, std::string> numbers{ {100, "hundred"},
										{3, "three"},
										{42, "forty two"},
										{11, "eleven"}
									   };
	int a;
	std::cout<<"Enter the number: \n";
	std::cin>>a;
	auto iter=numbers.find(a);
	if(iter!=numbers.end()){
		const auto& [key, value]=*iter;
		std::cout<<"Found: "<<key<<" ~ "<<value<<"\n";
		
		if(iter!=numbers.begin()){
			const auto& [key, value]=*std::prev(iter);
			std::cout<<"Previous: "<<key<<" ~ "<<value<<"\n";
		}else{
			std::cout<<"No previous element\n";
		}
		
		if(auto next_iter=std::next(iter); next_iter!=numbers.end()){
			const auto& [key, value]=*next_iter;
			std::cout<<"Next: "<<key<<" ~ "<<value<<"\n";
		}else{
			std::cout<<"No next element\n";
		}
	}else{
	std::cout<<"Not found\n";	
	}
	return 0;
}

