#include <iostream>
#include <algorithm>
#include <vector>

struct Date{
	int year = 1970;
	int month =1;
	int day = 1;
};

/*bool operator< (const Date& lhs, const Date& rhs){
	if(lhs.year!=rhs.year){
		return lhs.year<rhs.year;
		}
	if(lhs.month!=rhs.month){
		return lhs.month<rhs.month;                     //выполняют одно и то же
		}
	return lhs.day<rhs.day;
	}*/
bool compare (const Date& lhs, const Date& rhs){
	return std::tie(lhs.year, lhs.month, lhs.day)<std::tie(rhs.year, rhs.month, rhs.day);
}
	

int main(){
	std::vector<Date> dates={{2020, 3, 15}, 
							{2019, 1, 21}, 
							{2021, 1, 30}
							};
	for(const auto& [year, month, day]: dates){
		std::cout<<"| "<<year<<" - "<<month<<" - "<<day<<" |\n";
	}						
	if(compare(dates[1], dates[2])) std::cout <<"       LLl"<<"\n";
	std::sort(dates.begin(), dates.end(), [] (const Date& lhs, const Date& rhs){
	return std::tie(lhs.year, lhs.month, lhs.day)<std::tie(rhs.year, rhs.month, rhs.day);});
	for(const auto& [year, month, day]: dates){
		std::cout<<"| "<<year<<" - "<<month<<" - "<<day<<" |\n";
	}
	return 0;
}
