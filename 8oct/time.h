#ifndef TIME_H
#define TIME_H
namespace chron {
	class Time{
		private:
			int hours;
			int minuts;
			int seconds;
		public:
			Time(int h, int m, int s);
			int GetHours() const;
			int GetMinuts() const;
			int GetSeconds() const;
		};
	}
#endif //TIME_H
