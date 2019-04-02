#include <iostream>
#include "MilTime.h"
using namespace std;

int main()
{
  
   MilTime timeObj(2358, 58);
   MilTime timeObj1(2359, 59);
   
   MilTime timeObj2(2359, 60);
   MilTime timeObj3(2360, 59);

   cout << "The hour in military format is " 
	    << timeObj.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj.getSec() << endl;
	    
	cout << "The hour in military format is " 
	    << timeObj1.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj1.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj1.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj1.getSec() << endl;
	        
	cout << "The hour in military format is " 
	    << timeObj2.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj2.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj2.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj2.getSec() << endl;
	    
	cout << "The hour in military format is " 
	    << timeObj3.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj3.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj3.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj3.getSec() << endl;
	    
   return 0;
}