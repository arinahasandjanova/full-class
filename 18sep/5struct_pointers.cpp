#include <iostream>
#include <string>
struct Point{
	double x, y, z;
};
int main(){
	/*int x=42;
	int y=20;
	int*ptr; //с & так нельзя
	ptr=nullptr;
	ptr=&x;
	std::cout<<*ptr<<"\n";
	ptr=&y;
	std::cout<<*ptr<<"\n";*/
	
	Point p={3.0, 4.0, 5.0};
	Point* ptr=&p;
	std::cout<<(*ptr).x<<"\n";
	std::cout<<ptr->x<<"\n";
	
	return 0;
}
