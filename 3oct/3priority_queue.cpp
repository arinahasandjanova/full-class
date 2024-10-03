#include <iostream>
#include <functional>
#include <vector>
#include <queue>
int main(){
	std::priority_queue<int, std::vector <int>, std::greater<int>> pq; //третье это сортировка от большего к меньшему
	for(int x:{3, 14, 15, 92, 42, 6}){
		pq.push(x);
	}
	while(!pq.empty()){
		std::cout<<pq.top()<<"\n";
		pq.pop();
	}
	
	return 0;
}
