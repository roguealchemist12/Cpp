#include <iostream>
using namespace std;



class Car{
public:
	string brand;
	string model;
	int year;
	Car(string x, string y, int z)
	{//cunstroctor with parameters
		brand = x;
		model = y;
		year = z;
		}
private:
 int auf;
};

int main()
{
	//Create Car objects and call the cunstroctor with different values
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);
	
	Car k;
	
	k.auf = 2;
	cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;

    return 0;
}



