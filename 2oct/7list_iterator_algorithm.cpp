#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
int main(){
	
	std::vector<int> v {3, 14, 15, 92, 6};
	std::list<int> l;
	std::copy(v.begin(), v.end(), std::back_inserter(l));  //равно push_back повторно
	for(int elem: l){
		std::cout<<elem<<"  ";
	}
	
	return 0;
}
