#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::vector<int> data {1, 2, 3, 4, 72};
	for (int elem: data)
	{
		std::cout<<elem<<" ";
	}
	std::cout<<"\n";
	int *t=data.data(); 
	
	/*std::cout<<data.at(0)<<"\n";  
	std::cout<<data.size()<<"\n";
	std::cout<<data.front()<<"\n"; //first elem
	std::cout<<data.back()<<"\n";  //last elem
	//std::cout<<data.at(42)<<"\n";
	int a=data[0];
	int b=data[4];
	data[2]=-3;
	for (int elem: data)
	{
		std::cout<<elem<<" ";
	}
	std::cout<<"\n";
	std::vector<std::string> v1;
	std::vector<std::string> v2(5);
	std::vector<std::string> v3(5, "hello");
	for (std::string elem: v3)
	{
		std::cout<<elem<<" ";
	}
	std::cout<<"\n";*/
	return 0;
}
