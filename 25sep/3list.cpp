#include <iostream>
#include <list>
int main(){
	std::list<int> l {0, 10, 15, 20};
	/*l.push_front(5);
	l.push_front(0);
	l.push_back(25);
	l.push_back(30);
	l.pop_back();
	l.pop_front();
	for(int x: l){
		std::cout<<x<<"\n";
		}*/
		
	/*auto iter=l.begin();
	std::cout<<*iter<<"\n";
	//++iter;
	//std::cout<<*iter<<"\n";
	--iter;
	std::cout<<*iter<<"\n";*/
	
	/*for(auto iter=l.begin(); iter!=l.end(); ++iter)
		std::cout<<*iter<<"\n";
	std::cout<<"\n";
	for(auto iter=l.rbegin(); iter!=l.rend(); ++iter){
		std::cout<<*iter<<"\n";
		}*/
		
	auto iter=l.begin();
	++iter;
	l.insert(iter, 5);
	for(auto iter1=l.begin(); iter1!=l.end(); ++iter1)
		if(*iter1%2==0)
			iter1=l.erase(iter1);
		else 
			++iter1;
	for(auto iter2=l.begin(); iter2!=l.end(); ++iter2)
		std::cout<<*iter2<<"\n";
	
	return 0;
}
