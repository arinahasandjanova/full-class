#include <iostream>
enum class Color{
	White,
	Red, 
	Orange,
	Blue
	};
struct Point{
	double x=0.0;
	double y=0.0;
	double z=0.0;
	Color color;
};
int main(){
	Point point1;
	point1.color=Color::Blue;
	Point point2={1.4, -2.2, -3.98, Color::Red};
	point2.z=32;
	point2.x+=2;
	std::cout<<sizeof(point1)<<"\n";
	std::cout<<sizeof(Color)<<"\n";
	std::cout<<sizeof(double)<<"\n";
	
	return 0;
}
