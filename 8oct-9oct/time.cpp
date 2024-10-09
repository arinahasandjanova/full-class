#include "time.h"
#include <ostream>
#include <iostream>
using namespace chron;
Time::Time(int h, int m, int s): hours(h), minuts(m), seconds(s){
	normalize();
	}
void Time::normalize(){
	minuts+=seconds/60;
	seconds%=60;
	if(seconds<0){
		minuts-=1;
		seconds+=60;
		}
	hours+=minuts/60;
	minuts%=60;
	if(minuts<0){
		hours-=1;
		minuts+=60;
		}
	hours%=24;
	if(hours<0){
		hours+=24;
		}
	}
int Time::GetHours() const{
	return hours;
	}
int Time::GetMinuts() const{
	return minuts;
	}
int Time::GetSeconds() const{
	return seconds;
	}
int Time::TotalSeconds() const{
	return 3600*hours+60*minuts+seconds;
	}
void Time::AddHours(int h){
	hours+=h;
	normalize();
	}
void Time::AddMinuts(int m){
	minuts+=m;
	normalize();
	}
void Time::AddSeconds(int s){
	seconds+=s;
	normalize();
	}
Time& Time::operator+=(int s){
	seconds+=s;
	normalize();
	return *this;
	}
Time Time::operator+(int s) const{
	return Time(hours, minuts, seconds+s);
	}
/*Time operator+ (const Time& t, int s){
	return Time(t.GetHours(), t.GetMinuts(), t.GetSeconds()+s);
	}*/
int operator-(const Time&t1, const Time&t2){
	return t1.TotalSeconds()-t2.TotalSeconds();
	}
std::ostream& operator << (std::ostream& out, const chron::Time& t){
	out<<t.GetHours()<<":"<<t.GetMinuts()<<":"<<t.GetSeconds();
	return out;
	}
