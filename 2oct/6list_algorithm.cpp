#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
int main(){
	
	/*std::vector v {3, 14, 15, 92, 6};
	std::list<int> l;
	l.resize(v.size());
	std::copy(v.rbegin(), v.rend(), l.begin());
	for(int elem: l){
		std::cout<<elem<<"  ";
	}*/
	
	std::vector v {3, 14, 15, 92, 6};
	std::list<int> l(40);
	auto iter=std::copy(v.begin(), v.end(), l.begin());
	for(int elem: l){
		std::cout<<elem<<"  ";
	}
	l.erase(iter, l.end());
	std::cout<<"\n";
	for(int elem: l){
		std::cout<<elem<<"  ";
	}
	
	return 0;
}

