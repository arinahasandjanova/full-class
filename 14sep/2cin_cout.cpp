#include <iostream>
#include <vector>
#include <string>
int main()
{
	int x;
	std::vector<int> data;
	while(std::cin>>x)
	{
		data.push_back(x);
	}
	while(!data.empty() && data.back()==0)
	{
		data.pop_back();
	}
	std::cout<<"\n";
	for(int elem: data)
	{
		std::cout<<elem<<" ";
	}
	data.clear();
	std::cout<<"\n";
	for(int elem: data)
	{
		std::cout<<elem<<" ";
	}
	/*for (int elem: data)
	{
		std::cout<<elem<<" ";
	}*/
	return 0; //ctrl + d
}
