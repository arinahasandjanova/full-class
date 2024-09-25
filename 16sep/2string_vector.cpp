#include <iostream>
#include <vector>
#include <string>
enum class color{
	white, 
	red, 
	blue, 
	green
	};
int main(){
	
	/*std::string phrase;
	std::getline(std::cin, phrase);
	if(phrase.starts_with("hello")){
		std::cout<<"Hi\n";
		}
	if(phrase.ends_with("bye")){
		std::cout<<"Adieux\n";
		}
	color cl1=color::red;
	color cl2=color::green;
	int value=static_cast<int>(cl2);
	std::cout<<value<<"\n";
	color cl3=static_cast<color>(2);*/
	char c;
	std::vector<std::string> vec{"hi", "bye", "hu"};
	for(std::string elem: vec)
	{
		c=elem[0];
		std::cout<<c<<"\n";
	}
	return 0;
}
