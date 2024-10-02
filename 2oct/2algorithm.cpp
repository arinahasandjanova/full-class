#include <iostream>
#include <algorithm>
#include <deque>
int main(){
	std::deque<int> data {3, 14, 15, 92, 6};
	auto iter1=std::find(data.begin(), data.end(), 15);
	std::cout<<(iter1-data.begin())<<"\n";
	auto start=data.begin();
	auto end=start+3;
	auto iter2=std::find(start, end, 14);
	if(iter2==end){
		std::cout<<"No such element\n";
	}else{
		std::cout<<*iter2<<"\n";
	}
	return 0;
}
