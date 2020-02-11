/* Write a program that uses a two-dimensional array to store the highest and lowest temperatures for each month of the year. 
The program should output the average high, average low, and the highest and lowest temperatures for the year. Your program must
consist of the following functions:
a. Function getData: This function reads and stores data in the two-dimensional array.
b. Function averageHigh: This function calculates and returns the average high temperature for the year.
c. Function averageLow: This function calculates and returns the average low temperature for the year.
d. Function indexHighTemp: This function returns the index of the highest high temperature in the array.
e. Function indexLowTemp: This function returns the index of the lowest low temperature in the array.
(These functions must all have the appropriate parameters.)*/


#include <iostream>
using namespace std;
const int months = 12;
 
 
void getData( double A[][2], int B);
double averageHigh(double A[][2], int B);
double averageLow(double A[][2], int B);
int indexHighTemp(double A[][2], int B);
int indexLowTemp( double A[][2], int B);
 
 
int main()
{
    double temperatures [months][2];
 
 
    getData(temperatures, months);
 
 
    cout << "The average high temperature for the year is " << averageHigh(temperatures, months)<<endl;
    cout << "The average low temperature for the year is " << averageLow(temperatures, months)<<endl;
 
 
    cout << "Index of the highest temperature for the year is " << indexHighTemp(temperatures, months)<<endl;
    cout << "Index of the lowest temperature for the year is "<< indexLowTemp(temperatures, months)<<endl;
    return 0;
}
 
 
void getData(double A[][2], int B)
{
    for (int i = 0; i < B; i++)
    {
        cout << "Enter the highest temperature for the month" << (i+1) << ": " ;
         cin >> A[i][0];
        cout << "Enter the lowest temperature for the month" << (i+1) << ": " ;
          cin >> A[i][1];
     
    }
}
 
 
double averageHigh(double A[][2], int B)
{
    double sum = 0;
 
 
    for (int i = 0; i <B; i++)
        sum +=A[i][0];
    return (sum/B);
}
     
double averageLow(double A[][2], int B)
{
    double sum = 0;
 
 
    for( int i = 0; i < B; i++)
        sum +=A[i][1];
    return (sum/B);
}
 
 
int indexHighTemp(double A[][2], int B)
{    
    int index = 0;
double highest = A[0][0];
 
 
for(int i =1; i <B; i++)
    if (A[i][0] > highest)
    {
        highest = A[i][0];
        index =i;
    }
    return index;
}
 
 
int indexLowTemp(double A[][2], int B)
{
    int index = 0;
    double lowest = A[0][1];
 
 
    for (int i = 1; i < B; i++)
        if (A[i][1] < lowest)
        {
            lowest = A[i][1];
            index = i;
        }
 
 
        return index;
}
