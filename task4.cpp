/*Write a program to convert the time from 24-hour notation to 12-hour notation and vice versa. Your program must be menu-driven, 
giving the user the choice of converting the time between the two notations. Furthermore,
your program must contain at least the following function: a function to convert the time from 24-hour notation to 12-hour notation,
 a function to convert the time from 12-hour notation to 24-hour notation, a function to display the
choices, function(s) to get the input, and function(s) to display the results. (For 12-hour time notation, your program must display AM or PM.)*/

#include <iostream>
using namespace std;

void choice();
void input24to12(int hours, int minutes);
void input12to24(int hours, int minutes, char AP);


int main()
{
    int hours;
    int minutes ;
    char AP;
    char mychoice;
    choice();
    cin >> mychoice;

    if (mychoice == 'A')
        input24to12(hours, minutes);
    else if (mychoice == 'B')
        input12to24(hours, minutes, AP);

}

void choice() {
    cout << " conversion to 12 hours from 24 hours please enter 'A' " << endl;
    cout << " comversion to 24 hours from 12 hours please enter 'B' " << endl;
}


void input24to12 (int hours, int minutes) {

    cout << "Enter Hours & Minutes to be converted from 24 hours  to 12 hours Notation " << endl;
    cin >> hours;
    cin >> minutes;

    if (hours < 12)
        cout << hours <<":"<< minutes << "A.M" << endl;
    else if (hours == 12)
        cout << hours <<":"<< minutes << "P.M" << endl;
    else if (hours > 12)
        cout << hours - 12 <<":"<< minutes << "P.M" << endl;

}



void input12to24(int hours, int minutes, char AP) {

    cout << "Enter Hours & Minutes considring the AM/PM where 'A' stands for AM and 'P' stands for PM to be converted from 12 hours  to 24 hours " << endl;
    cin >> hours;
    cin >> minutes;
    cin >> AP;

    if (AP == 'A' && hours <= 11)
        cout << hours << ":" << minutes;
    else if (AP == 'P' && hours == 12)
        cout << 12 << ":" << minutes;
    else if (AP== 'P' && hours > 12);
    cout << hours + 12 << ":" << minutes;
}
	

	
