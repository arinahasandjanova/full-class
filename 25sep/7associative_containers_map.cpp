#include <iostream>
#include <string>
#include <map>
int main(){
	/*std::map<std::string, int> years{                       //слева ключ по которому будет сортировка
										{"Moscow", 1147},
										{"Rome", -753},
										{"London", 47}
									};
	for(const auto& [city, year]: years){
		std::cout<<city<<":"<<year<<"\n";
		}*/
		
	/*std::map<std::string, int> data;
	std::string key;
	int value;
	while(std::cin>>key>>value){
		data[key]=value;         //data.insert({key, value}) не перезапишет   data.insert_or_assign({key, value}) перезапишет
		}
		std::cout<<"\n";
	data.erase("hello");
	if(auto iter=data.find("test"); iter!=data.end()){
		std::cout<<"Found the key "<<iter->first<<" with a value "<<iter->second<<"\n";
		}else{
			std::cout<<"not found\n";
			}*/
			
	std::map<std::string, int> freqs;
	std::string word;
	while(std::cin>>word){
		++freqs[word];
		}
		std::cout<<"\n";
	for(const auto& [word, freq]: freqs){
		std::cout<<word<<"\t"<<freq<<"\n";
		}		
	return 0;
}
