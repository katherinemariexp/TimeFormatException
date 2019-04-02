// Description: Lab 7A - Time Format Exception
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// April 1, 2019
// Status: Complete

//Time.h


#ifndef TIME_H
#define TIME_H

class Time
{
protected:
	int hour;
	int min;
	int sec;
public:
	Time(int h, int m, int s) 
		{ hour = h; min = m; sec = s; }

	int getHour() 
		{ return hour; }

	int getMin() 
		{ return min; }

	int getSec() 
		{ return sec; }
};

#endif