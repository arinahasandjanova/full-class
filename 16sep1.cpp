#include <iostream>
#include <string>
int main()
{
	std::string s="Some string";
	s+=' ';
	s+="functions";
	std::cout<<s<<"\n";
	std::string sub1=s.substr(5, 6);
	std::cout<<sub1<<"\n";
	std::string sub2=s.substr(12);
	std::cout<<sub2<<"\n";
	size_t pos1=s.find(" ");
	std::cout<<pos1<<"\n";
	size_t pos2=s.find(" ", pos1+1);
	std::cout<<pos2<<"\n";
	size_t pos3=s.find("str");
	std::cout<<pos3<<"\n";
	size_t pos4=s.find("#");
	if(pos4==std::string::npos) std::cout<<"there's no your sign"<<"\n";
	s.insert(5, "std::");
	s.replace(0, 4, "Special");
	s.erase(8, 5);
	std::cout<<s<<"\n";
	
	return 0;
}
