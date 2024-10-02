#include <iostream>
#include <algorithm>
#include <list>
int main(){
	
	std::list<int> data {3, 14, 15, 92, 6};
	//std::sort(data.begin(), data.end());
	data.sort();
	for(int elem: data){
		std::cout<<elem<<"  ";
	}
	
	return 0;
}

