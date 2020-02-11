//Write a program that inputs a date (for example, July 4, 2008) and outputs the day of the week that corresponds to that date.
#include<iostream>
using namespace std;
	const int january=1;
	const int february=2;
	const int march=3;
	const int april=4;
	const int may=5;
	const int june=6;
	const int july=7;
	const int august=8;
	const int september=9;
	const int october=10;
	const int november=11;
	const int december=12;
	bool isleapyear(int year);
	int getcenturyvalue(int year);
	int getyearvalue(int year);
	int getmonthvalue(int month,int year);
	int main(){
		
		int month,year,day,day_of_week;
		cout<<"enter a month:"<<endl;
		cin>>month;
			cout<<"enter a day:"<<endl;
		cin>>day;
			cout<<"enter a year:"<<endl;
		cin>>year;
		
		day_of_week = day + getmonthvalue(month, year) + getyearvalue(year) + getcenturyvalue(year);    
    
	day_of_week = day_of_week % 7; 
 
    cout << "\n The date " << month << "/" << day << "/" << year << " is a ";  

    if (day_of_week == 0) 
    { 
		cout << "Sunday."; 
    }  
    else if (day_of_week == 1) 
    { 
		cout << "Monday."; 
    }  
    else if (day_of_week == 2) 
    { 
		cout << "Tuesday."; 
    }  
    else if (day_of_week == 3) 
    { 
		cout << "Wednesday."; 
    }  
    else if (day_of_week == 4) 
    { 
		cout << "Thursday."; 
    }  
    else if (day_of_week == 5) 
    { 
		cout << "Friday."; 
    }  
    else if (day_of_week == 6) 
    { 
		cout << "Saturday."; 
    }  
    cout << endl; 
    return 0; 
		
	}
	/*void get_input(int month, int day, int year) 

   {  
	cout << " Please enter a month: "<<endl;
    cin >> month;
    cout << " Please enter a day: "<<endl;
    cin >> day;
    cout << " Please enter a year: "<<endl; 
    cin >> year;
  }*/

	bool isleapyear(int year){
		return (((year % 400) == 0) ||(((year % 4) == 0) && ((year % 100) != 0))); 	
	}
	int getcenturyvalue(int year) 

  {  
    int century;
	int remainder; 
    century = year/100;  
    remainder = (century % 4); 
    return ((3 - remainder) * 2); 
  }
  
	int getyearvalue(int year){
		 int Century;  
         Century = year % 100;  
        return (Century + (Century/4)); 
	}
	int getmonthvalue(int month,int year){
			 int result;  
    if (month == january) 
    { 
		if (isleapyear(year))  
        { 
    		result = 6; 
        } 
        else 
		{ 
    		result = 0; 
		} 
	}
    if (month == february) 
	{ 
		if (isleapyear(year))  
        { 
    		result = 2; 
        } 
        else 
		{ 
    		result = 3; 
		} 

	}
    else if (month == march) 

    	{ 
			result = 3; 
    	}  

    else if (month == april) 

    { 
		result = 6; 
    }  

    else if (month == may) 

    { 
		result = 1; 
    }  

    else if (month == june) 

    { 
		result = 4; 
    }  

    else if (month == july) 

    { 
		result = 6; 
    }  

    else if (month == august) 

    { 
		result = 2; 
    }  

    else if (month == september) 

    { 
		result = 5; 
    }  

    else if (month == october) 

    { 
		result = 0;
    }  

    else if (month == november) 

    { 
		result = 3; 
    }  

    else if (month == december) 

    { 
		result = 5; 
    } 
  
    return result; 
	
}
