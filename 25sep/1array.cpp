#include <iostream>
#include <array>
int main(){
	std::array<int, 3> point {1, 2, -3};
	for(int x: point){
		std::cout<<x<<"\n";
		}
	
	return 0;
}
