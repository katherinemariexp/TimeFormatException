// Description: Lab 7A - Time Format Exception
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// April 1, 2019
// Status: Complete

//MilTime.h


#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"

using namespace std;

class MilTime : public Time
{
private:
	int milHours;
    int milSeconds;
public:
	class BadSeconds
	{
	private:
		int value;
	public:
		BadSeconds(int val) { value = val; }
		int getValue() { return value; }
	};
	
	class BadHour
	{
	private:
		int value;
	public:
		BadHour(int val) { value = val; }
		int getValue() { return value; }
	};
	
	MilTime(int, int);

    void convert();

	void setTime(int, int);

    int getHour() 
		{ return milHours; }

    int getStandHr() 
		{ return hour; }
};

MilTime::MilTime(int h = 0, int s = 0) : Time(0, 0, s)
{
	if (h < 0 || h > 2359)
	{
		cout << "Hours must be in the range 0 - 2359.\n";
		milHours = 0;
		milSeconds = 0;
	}
	else if (s < 0 || s > 59)
	{
		cout << "Seconds must be in the range 0 - 59.\n";
		milSeconds = 0;
	}
	else
	{
		milHours = h;
   	    milSeconds = s;
	}
	convert();
}

//***********************************************
// convert member function                      *
//***********************************************

void MilTime::convert()
{
	double temp;

	if (milHours > 1200)
		hour = milHours - 1200;
	else
		hour = milHours;
	
	hour /= 100;
	temp = (milHours - 1200) / 100.0;
	min = static_cast<int>(((temp - static_cast<int>(temp)) * 100));
}

//***********************************************
// setTime member function                      *
//***********************************************

void MilTime::setTime(int h, int s)
{
//	milHours = h;
//	milSeconds = s;
//	convert();
	
	if (h > 0 && h <= 2359 )
	{
			milHours = h;
			convert();
	}
	else
		throw BadHour(h);

	
	if (s > 0 && s <= 59)
	{
		milSeconds = s;
		convert();
	}
	else
		throw BadSeconds(s);
}

#endif

