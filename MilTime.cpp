#include <iostream>
#include "MilTime.h"

using namespace std;


int main()
{

   MilTime timeObj(2358, 58);

   try
   {
   cout << "The hour in military format is " 
	    << timeObj.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj.getSec() << endl;
	    
   }
   catch (MilTime::BadSeconds)
   {
      cout << "Error: " << timeObj.getSec() << "is an invalid value for the MilTime's Seconds."
         << endl;
   }
      catch (MilTime::BadHour)
   {
      cout << "Error: " << timeObj.getHour() << "is an invalid value for the MilTime's Hours."
         << endl;
   }
	  

	
	try
   {
   timeObj.setTime(2359, 59);
   cout << "The hour in military format is " 
	    << timeObj.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj.getSec() << endl;
	    
   }
   catch (MilTime::BadSeconds e)
   {
      cout << "Error: " << e.getValue() << "is an invalid value for the MilTime's Seconds."
         << endl;
   }
   catch (MilTime::BadHour e)
   {
      cout << "Error: " << e.getValue() << "is an invalid value for the MilTime's Hours."
         << endl;
   }
   
   //BadSeconds Exception
   
   
   try
   {
   timeObj.setTime(2359, 60);
   cout << "The hour in military format is " 
	    << timeObj.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj.getSec() << endl;
	    
   }
   catch (MilTime::BadSeconds e)
   {
      cout << "Error: " << e.getValue() << " is an invalid value for the MilTime's Seconds."
         << endl;
   }
   catch (MilTime::BadHour e)
   {
      cout << "Error: " << e.getValue() << " is an invalid value for the MilTime's Hours."
         << endl;
   }
   
   //BadHour Exception 
   
   
   try
   {
   timeObj.setTime(2360, 59);
   cout << "The hour in military format is " 
	    << timeObj.getHour() << endl;
   cout << "The hour in standard format is " 
	    << timeObj.getStandHr() << endl;
   cout << "The minutes are " 
	    << timeObj.getMin() << endl;
   cout << "The seconds are " 
	    << timeObj.getSec() << endl;
	    
   }
   catch (MilTime::BadSeconds e)
   {
      cout << "Error: " << e.getValue() << "is an invalid value for the MilTime's Seconds."
         << endl;
   }
   catch (MilTime::BadHour e)
   {
      cout << "Error: " << e.getValue() << " is an invalid value for the MilTime's Hours."
         << endl;
   }
   
   
   return 0;
}