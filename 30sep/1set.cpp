#include <iostream>
#include <string>
#include <set>
#include <unordered_set>

int main(){
	std::unordered_set<std::string> words;
	std::set<std::string> duplicate_words;
	std::string word;
	/*while(std::cin>>word){
		if(words.contains(word)){              //contains ведет поиск
			duplicate_words.insert(word);
		}else{
		words.insert(word);	
		}
	}*/
	while(std::cin>>word){
		auto [iter, has_been_inserted]=words.insert(word);
		if(!has_been_inserted){
			duplicate_words.insert(word);
			}
		}
	for(const auto& word : duplicate_words){
		std::cout<<word<<"\n";
		}
	return 0;
}
