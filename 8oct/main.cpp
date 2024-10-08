#include <iostream>
#include "time.h"
//using namespace chron;

bool IsAfternoonTime(const chron::Time& time){
		return time.GetHours()>=12;
}

int main(){
	
	chron::Time t(300, -6, -5000);
	std::cout<<t.GetHours()<<" ";
	std::cout<<t.GetMinuts()<<" ";
	std::cout<<t.GetSeconds()<<" ";
	if(IsAfternoonTime(t)){
		std::cout<<"Yes it's "<<t.GetHours()-12<<" PM\n";
	}else{
		std::cout<<"No\n";
	}
	
	return 0;
	}
