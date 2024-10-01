#include <iostream>
#include <map>
#include <string>
#include <cctype>
std::string only_word(std::string& word){
	size_t end=word.size();
	while(end>0 && std::ispunct(word[end-1])){
		--end;
		}
	return word.substr(0, end);
	}
int main(){
	std::map<std::string, int> words_love;
	std::string word;
	double box_number=0;
	
	while(std::cin>>word){
		word=only_word(word);
		if(!word.find("люб")){
			++words_love[word];
			}
		}
	for(const auto& [word, number]: words_love){
		std::cout<<word<<"\t"<<number<<"\n";
		box_number+=number;
		}	
	std::cout<<"\n";
	if((int)(box_number/1000)==box_number/1000){
		std::cout<<(int)box_number/1000<<" boxes of raffaello\n";
	}else if(box_number/1000>0){
		std::cout<<(int)box_number/1000<<" boxes of raffaello\n"<<"and "<<(double)(box_number-(int)(box_number/1000)*1000)/(double)(1000/15)<<" single chocolate candy\n";
	}else{
		std::cout<<(double)(box_number-(int)(box_number/1000)*1000)/(double)(1000/15)<<" single chocolate candy\n";
	}
	
	return 0;
}
