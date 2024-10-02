#include <iostream>
#include <algorithm>
#include <vector>
int main(){
	std::vector<int> data {2, 7, 1, 8, 2, 8};
	/*std::sort(data.begin()+1, data.end()-1);
	for(int elem: data){
		std::cout<<elem<<"\n";
		}*/	
	/*int counter=0;
	for(int elem:data){
		if(elem==8){
			++counter;
			}
		}
	std::cout<<counter;*/
	std::cout<<std::count(data.begin(), data.end(), 8); //тоже самое что и предыдущий 
	
	return 0;
}
