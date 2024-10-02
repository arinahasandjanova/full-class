#include <iostream>
#include <algorithm>
#include <vector>
int main(){
	std::vector v {5, 5, 3, 2, 2, 5, 9, 1};
	auto iter=std::unique(v.begin(), v.end());  //очищаем от дубликатов
	for(int elem: v){
		std::cout<<elem<<"  ";
	}
	v.erase(iter, v.end());
	std::cout<<"\n";
	for(int elem: v){
		std::cout<<elem<<"  ";
	}
	
	return 0;
}

