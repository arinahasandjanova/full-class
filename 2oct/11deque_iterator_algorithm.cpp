#include <iostream>
#include <algorithm>      //это все работает только с отсортированными контейнерами
#include <vector>
#include <list>
#include <iterator>
#include <deque>
int main(){
	
	std::vector<int> in1 {1, 3, 5, 5, 7};
	std::list<int> in2 {1, 1, 2, 3};
	std::deque<int> out;
	std::merge(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));   //слияние множеств
	
	for(int elem: out){
		std::cout<<elem<<"  ";
		}
	std::cout<<"\n\n";
	
	out.clear();
	std::set_union(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));   //объединение множеств
	
	for(int elem: out){
		std::cout<<elem<<"  ";
		}
	std::cout<<"\n\n";
	
	out.clear();
	std::set_intersection(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));  //пересечение множеств
	
	for(int elem: out){
		std::cout<<elem<<"  ";
		}
	std::cout<<"\n\n";
	
	out.clear();
	std::set_difference(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));  //важен порядок из перваого ножества отнимаем второе
	
	for(int elem: out){
		std::cout<<elem<<"  ";
		}
	std::cout<<"\n\n";
	
	out.clear();
	std::set_symmetric_difference(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));  //объединение без пересекающихся элементов
	
	for(int elem: out){
		std::cout<<elem<<"  ";
		}
	std::cout<<"\n\n";
	
	out.clear();
	
	return 0;
}

