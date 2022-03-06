#include <iostream>
#include <string>
using namespace std;

class Cars{
	private:
		string company_name;
		string model_name;
		string fuel_type;
		float mileage;
		double price;
		
		public:
                //Default constructor
                Cars(){
	          company_name ="Toyata";
                }
                //Parameterized constructor
                Cars(string cname,string mname, string ftype, float m, double p)
                {
                      company_name = cname;
                           	model_name = mname;
				fuel_type = ftype;
				mileage = m;
				price = p;

                }
			void setData(string cname, string mname, string ftype, float m, double p)
			{
				company_name = cname;
				model_name = mname;
				fuel_type = ftype;
				mileage = m;
				price = p;
			}
			void displayData()
			{
				cout<<"Car properties "<< endl;
				cout<<"Car company name: "<<company_name<< endl;
				cout<<"Car company model : "<<model_name<< endl;
				cout<<"Car company fuel type : "<<fuel_type<< endl;
				cout<<"Car mileage : "<<mileage<< endl;
				cout<<"Car price : "<<price<< endl<<endl;
				
			}
	};

int main()
{
	Cars car1,car2("Toyota","TristaDvaeset","Voda",3.2,100);
	car1.setData("Toyota","altis","Petrol",15.5,150000);
	car1.displayData();
        car2.displayData();
	
	return 0;
}
	
