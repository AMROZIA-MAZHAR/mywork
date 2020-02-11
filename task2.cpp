/*Jason, Samantha, Ravi, Sheila, and Ankit are preparing for an upcoming marathon. Each day of the week,
 they run a certain number of miles and write them into a notebook. At the end of the week, they would 
like to know the number of miles run each day, the total miles for the week, and average miles run each day. 
Write a program to help them analyze their data. Your program must contain parallel arrays: an array to store
the names of the runners and a two-dimensional array of five rows and seven columns to store the number of miles 
run by each runner each day. Furthermore, your program must contain at least the following functions: a function to 
read and store the runners’ names and the numbers of miles run each day; a function to find the total miles run by 
each runner and the average number of miles run each day, and a function to output the results.*/

#include<iostream>
using namespace std;

void getdata(char A[],double B[][7]);
double average(char A[],double B[][7]);


int main(){
	
	char names[5];
	double miles[5][7];
	
	getdata(names,miles);
    average(names, miles);
    return 0;
	
}
  
 void getdata(char A[],double B[][7])
{
	for(int i=0;i<=4;i++){
		cout<<"enter the name of runner"<<endl;
		cin>>A[i];
		for(int j=0;j<=6;j++){
	    cout<<"enter no of miles :"<<endl;
	    cin>>B[i][j];
	}
}}
double average(char A[],double B[][7]){
	double sum=0;
	double avg=0;
	int i=0;
	    while(i<=4){
		for(int j=0;j<=6;j++){
	   sum +=B[i][j];
	   avg=sum/7;
}  
	   cout<<"total no of miles by "<<A[i] <<" is:"<<sum<<endl;
	   cout<<"average miles by "<<A[i] <<" is:"<<avg<<endl;
	   cout<<endl;
	   sum=0;
	   i++;
}}
		
	


