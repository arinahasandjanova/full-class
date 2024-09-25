#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
	/*std::vector<int> data {1, 2, 3, 4, 5};
	std::cout<<data.capacity()<<"\n";
	data.push_back(7);
	std::cout<<data.capacity()<<"\n";
	for (int elem: data)
	{
		std::cout<<elem<<" ";
	}
	
	std::vector<std::string> words;
	size_t words_count;
	std::cin >> words_count;
	words.reserve(words_count);
	for(size_t i=0; i!=words_count; ++i)
	{
		std::string word;
		std::cin>>word;
		words.push_back(word);
	}
	for(std::string elem: words)
	{
		std::cout<<elem<<"\n";
	}
	std::vector<int> data {1, 2, 3, 4, 5};
	data.reserve(10);
	data.resize(3);
	for(int elem: data)
	{
		std::cout<<elem<<" ";
	}
	std::cout<<"\n";
	data.resize(6);
	for(int elem: data)
	{
		std::cout<<elem<<" ";
	}
	std::cout<<"\n";*/
	
	//std::vector<std::vector<int>> matrix (m, std::vector<int>(n));
	
	std::vector<int> data {0, 9, 14, 3, 81, 57, 6};
	//std::sort(data.begin(), data.end());
	//std::ranges::sort(data);
	std::sort(data.rbegin(), data.rend()); //reverse sort
	for(int elem: data)
	{
		std::cout<<elem<<" ";
	}
	std::cout<<"\n";
	return 0;
}
