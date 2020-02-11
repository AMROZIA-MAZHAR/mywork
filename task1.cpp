/*Write a program that can be used to assign seats for a commercial airplane. The airplane has 13 rows, with six
seats in each row. Rows 1 and 2 are first class, rows 3 through 7 are business class, and rows 8 through 13 are economy class. 
Your program must prompt the user to enter the following information:
a. Ticket type (first class, business class, or economy class)
b. Desired seat
Here, * indicates that the seat is available; 
X indicates that the seat is occupied. Make this a menu-driven program; show the user’s choices and allow the user to make the appropriate choices.*/

#include<iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int airplane[13][6];
	char title[13][6];
	string ticket;
    int row;
	char seat;
	int seatno;
	
	for(int i=0;i<13;i++){
		for(int j=0;j<6;j++){
			airplane[i][j]=0;
			title[i][j]='*';
		}
	}
	for(int i=0;i<13;i=i+2){
		for(int j=0;j<6;j=j+2){
			airplane[i][j]=1;
			title[i][j]='X';
		
		}
	}
	cout<<"Rows 1 and 2 are first class (first_class)"<<endl;
    cout<<"Rows 3 through 7 are business class (bussiness_class)"<<endl;
    cout<<"Rows 8 through 13 are economy class (ecconomy_class)"<<endl;
		for(int i=0;i<1;i++){
		for(int j=0;j<1;j++){
			cout<<            "\t\tA\tB\tC\tD\tE\tF"<<endl;
			cout<<"row1\t"<<"\t"<<title[0][0]<<"\t"<<title[0][1]<<"\t"<<title[0][2]<<"\t"<<title[0][3]<<"\t"<<title[0][4]<<"\t"<<title[0][5]<<endl;	
		    cout<<"row2\t"<<"\t"<<title[1][0]<<"\t"<<title[1][1]<<"\t"<<title[1][2]<<"\t"<<title[1][3]<<"\t"<<title[1][4]<<"\t"<<title[1][5]<<endl;	
			cout<<"row3\t"<<"\t"<<title[2][0]<<"\t"<<title[2][1]<<"\t"<<title[2][2]<<"\t"<<title[2][3]<<"\t"<<title[2][4]<<"\t"<<title[2][5]<<endl;	
			cout<<"row4\t"<<"\t"<<title[3][0]<<"\t"<<title[3][1]<<"\t"<<title[3][2]<<"\t"<<title[3][3]<<"\t"<<title[3][4]<<"\t"<<title[3][5]<<endl;	
			cout<<"row5\t"<<"\t"<<title[4][0]<<"\t"<<title[4][1]<<"\t"<<title[4][2]<<"\t"<<title[4][3]<<"\t"<<title[4][4]<<"\t"<<title[4][5]<<endl;	
			cout<<"row6\t"<<"\t"<<title[5][0]<<"\t"<<title[5][1]<<"\t"<<title[5][2]<<"\t"<<title[5][3]<<"\t"<<title[5][4]<<"\t"<<title[5][5]<<endl;	
			cout<<"row7\t"<<"\t"<<title[6][0]<<"\t"<<title[6][1]<<"\t"<<title[6][2]<<"\t"<<title[6][3]<<"\t"<<title[6][4]<<"\t"<<title[6][5]<<endl;	
			cout<<"row8\t"<<"\t"<<title[7][0]<<"\t"<<title[7][1]<<"\t"<<title[7][2]<<"\t"<<title[7][3]<<"\t"<<title[7][4]<<"\t"<<title[7][5]<<endl;	
			cout<<"row9\t"<<"\t"<<title[8][0]<<"\t"<<title[8][1]<<"\t"<<title[8][2]<<"\t"<<title[8][3]<<"\t"<<title[8][4]<<"\t"<<title[8][5]<<endl;	
			cout<<"row10\t"<<"\t"<<title[9][0]<<"\t"<<title[9][1]<<"\t"<<title[9][2]<<"\t"<<title[9][3]<<"\t"<<title[9][4]<<"\t"<<title[9][5]<<endl;	
			cout<<"row11\t"<<"\t"<<title[10][0]<<"\t"<<title[10][1]<<"\t"<<title[10][2]<<"\t"<<title[10][3]<<"\t"<<title[10][4]<<"\t"<<title[10][5]<<endl;	
			cout<<"row12\t"<<"\t"<<title[11][0]<<"\t"<<title[11][1]<<"\t"<<title[11][2]<<"\t"<<title[11][3]<<"\t"<<title[11][4]<<"\t"<<title[11][5]<<endl;	
			cout<<"row13\t"<<"\t"<<title[12][0]<<"\t"<<title[12][1]<<"\t"<<title[12][2]<<"\t"<<title[12][3]<<"\t"<<title[12][4]<<"\t"<<title[12][5]<<endl;	
			cout<<"enter ticket type(first_class bussiness_class economy_class"<<endl;
			cin>>ticket;
			cout<<"enter deired row"<<endl;
			cin>>row;
			cout<<"enter desired seat(A to F)"<<endl;
			cin>>seat;
			switch(seat)
	{
		case 'A':
		case 'a':
	       seatno=1;
		break;
		
		case 'B':
		case 'b':
		   seatno=2;
		break;
		
		case 'C':
		case 'c':
		   seatno=3;
		break;
		
		case 'D':
		case 'd':
		    seatno=4;
		break;
		
		case 'E':
		case 'e':
		  seatno=5;
		break;
		
		case 'F':
		case 'f':
		    seatno=6;
		break;
		
	}
	cout<<seatno<<endl;
	cout<<row<<endl;
 
	if(ticket == "FC")
	{
		if(row== 1 || row == 2)
		{
		
		if(airplane[row][seatno]==0)
		{
	    cout<<seatno<<"NO seat is available"<<endl;
		   
		}
		else if(airplane[row][seatno]==1)
		{
		cout<<seatno <<"sorry, seat is occupied"<<endl;
		}
		
		}
		else
		{
		  	cout<<"Wrong Class"<<endl;
			
		}
		
	}
	else if(ticket == "BC")
	{
		if(row== 3 || row== 4 || row == 5 || row== 6|| row == 7)
		{
		if(airplane[row][seatno] == 0)
		{
		   cout<<"seat is available"<<endl;
		}
		else if(airplane[row][seatno] == 1)
		{
			cout<<" is already occupied"<<endl;
		}
		
		}
		else
		{
		  	cout<<"Wrong Class"<<endl;
		}
	}
	else if(ticket == "EC")
	{
		if(row == 8 || row == 9 || row== 10 || row == 11|| row== 12|| row== 13)
		{
		if(airplane[row][seatno] ==0)
		{
			cout<<"seat is available"<<endl;
		}
		else if(airplane[row][seatno]==1)
		{
			cout<<"Message: Seat "<<seatno<<" is already occupied"<<endl;
		}
		}
			else
		{
		  	cout<<"Wrong Class"<<endl;	
		}
}
			
}
}
	
}
