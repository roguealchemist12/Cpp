#include <iostream>
using namespace std;


struct Distance
{
	int feet;
	float inches;
	string metar;
	
};

struct Room
{
		Distance length;
		Distance width;
		

};

void starLine()
{
	for(int i = 0; i<20; i++)
{
	cout<<"*";
}
}
int main()
{
	
	Room dining;
	
	
	
	dining.length.feet = 13;
	dining.length.inches = 6.5;
	dining.width.feet = 10;
	dining.width.inches = 0.0;
	
	dining.width.metar = "Dvesta metri bato"; 
	
	cout<<dining.width.metar<<endl;
	
	float l = dining.length.feet + dining.length.inches/12;
	float w = dining.width.feet + dining.width.inches/12;
	// find area and display it
	cout<< "Dining room area is " <<l * w<<	" square feet\n";
	starLine();
	return 0;	 
}
