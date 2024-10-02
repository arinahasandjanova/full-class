#include <iostream>
#include <vector>

template <typename T>
void Duplicate(std::vector<T>& v){
	v.insert(v.end(), v.begin(), v.end());
}
int main(){
	
	std::vector<int> data {1, 4, 5, 9, 9, 13, 47};
	Duplicate(data);
	for(int elem: data){
		std::cout<<elem<<"  ";
		}
	std::cout<<"\n\n";
	
	return 0;
}
