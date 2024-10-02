#include <iostream>
#include <algorithm>
#include <vector>
int main(){
	
	/*std::vector<int> data {3, 14, 15, 92, 6};
	std::partial_sort(data.begin(), data.begin() + 3, data.end());
	for(int elem: data){
		std::cout<<elem<<"  ";
	}*/
	
	std::vector<int> data {1, 4, 5, 9, 9, 13, 46};
	if(std::is_sorted(data.begin(), data.end())&&std::binary_search(data.begin(), data.end(), 5)){   // ведет себя как будто массив уже отсортирован | проверяет отсортирован ли массив
		std::cout<<"Found\n";
	}else{
		std::cout<<"Not found\n";
	}
	return 0;
}

