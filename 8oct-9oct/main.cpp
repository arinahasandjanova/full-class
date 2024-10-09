#include <iostream>
#include "time.h"
using namespace chron;

bool IsAfternoonTime(const chron::Time& time){
		return time.GetHours()>=12;
}

int main(){
	
	Time t(21723);
	Time t1(10, 18, -5);
	Time t2(25, 10, 42);
	Time t3;
	std::cout<<t.GetHours()<<":"<<t.GetMinuts()<<":"<<t.GetSeconds()<<"\n";
	//t.AddSeconds(60);
	t.AddMinuts(4);
	t.AddHours(2);
	//t=t+23;
	std::cout<<(t+23).GetHours()<<":"<<(t+23).GetMinuts()<<":"<<(t+23).GetSeconds()<<"\n\n";                                                                
	std::cout<<t1.GetHours()<<":"<<t1.GetMinuts()<<":"<<t1.GetSeconds()<<"\n";
	std::cout<<t1.GetHours()<<":"<<t1.GetMinuts()<<":"<<t1.GetSeconds()<<"\n\n";
	std::cout<<t2.GetHours()<<":"<<t2.GetMinuts()<<":"<<t2.GetSeconds()<<"\n";
	std::cout<<t3.GetHours()<<":"<<t3.GetMinuts()<<":"<<t3.GetSeconds()<<"\n\n";
	
	std::cout<<(t1-t2)<<"\n";
	
	std::cout<<t<<"\n";
	
	/*if(IsAfternoonTime(t)){
		std::cout<<"Yes it's "<<t.GetHours()-12<<" PM\n";
	}else
		std::cout<<"No\n";
		}*/

	return 0;
}
