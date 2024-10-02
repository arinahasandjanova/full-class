#include <iostream>
#include <algorithm>
#include <vector>
int main(){
	
	std::vector<int> data {1, 4, 5, 9, 9, 13, 47};
	auto iter1=std::lower_bound(data.begin(), data.end(), 9);
	auto iter2=std::upper_bound(data.begin(), data.end(), 13);
	std::cout<<*iter1<<"\n";
	std::cout<<*(iter2-1)<<"\n";
	for(auto iter=iter1; iter!=iter2; ++iter){
		std::cout<<*iter<<"  ";
		}
	
	return 0;
}


