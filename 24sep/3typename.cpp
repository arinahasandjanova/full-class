#include <iostream>
#include <string>
/*int Max(int x, int y){
	if(x>y) return x;
	return y;
	}*/
template <typename T>
T Max(const T& x,const T& y){
	if(x>y) return x;
	return y;
	}
template <typename C>
C Min(const C& x,const C& y){
	if(x<y) return x;
	return y;
	}
struct Point{
	double x=0.0;
	double y=0.0;
	double z=0.0;
	}
int main(){
	std::cout<<Max(1, 2)<<"\n";
	std::cout<<Max<double>(3.14159, 2)<<"\n"; //обязательно указать тип
	
	std::string word1{"hello"};
	std::string word2{"world"};
	std::cout<<Min(word1, word2)<<"\n";
	
	return 0;
	}
