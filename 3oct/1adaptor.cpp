#include <iostream>
#include <stack>
int main(){
	std::stack<int> s;
	s.push(1);
	s.push(13);
	s.pop();
	std::cout<<s.top()<<"\n"; //обращается к последнему элементу
	if(s.empty()){
		std::cout<<"Stack is empty\n";
		}
		
	return 0;
}
