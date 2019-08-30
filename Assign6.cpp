/*Create Address class with data members
HouseNo
Colony
Area
City
Pincode
Implement followings
 Default constructor
 Parameterized constructor
 Accept Function for data input
 Display function for data display
 Separate header and implementation files
 Write function to find whether two addresses
are same or different.
 Overlaod == operator*/

#include<iostream>
#include<string>
using namespace std;
class Address{
	
	private:
		int HouseNo;
		string Colony;
		string Area;
		string City;
		int Pincode;

	public:
		//Default constr
		Address():HouseNo(0),Colony(""),Area(""),City(""),Pincode(0){}

		//Param Constr
		Address(int h,string c,string a,string ct,int p):HouseNo(h),Colony(c),Area(a),City(ct),Pincode(p){}	

		//Accepting
		void Accept(){
			cout<<"\nEnter Address details.."<<endl;
			cout<<"\nHouseNo:";
			cin>>HouseNo;
			cout<<"\nColony: ";
			cin>>Colony;
			cout<<"\nArea: ";
			cin>>Area;
			cout<<"\nCity: ";
			cin>>City;
			cout<<"\nPincode: ";
			cin>>Pincode;
		}
		//Displaying
		void Display(){
			//cout<<"\nAddress details"<<endl;

			cout<<"\nHouseNo: "<<HouseNo;
			cout<<"\nColony: "<<Colony;
			cout<<"\nArea: "<<Area;
			cout<<"\nCity: "<<City;
			cout<<"\nPincode: "<<Pincode;
		}
		//Comparing
		//Operator Overloading
		bool operator ==(Address &a2){
			if(HouseNo==a2.HouseNo)
				if(Colony==a2.Colony)
					if(Area==a2.Area)
						if(City==a2.City)
							if(Pincode==a2.Pincode)
								return true;

			return false;
		}
};

int main()
{
	Address a,a1(22,"abc","abc","abc",111),a2;
	a2.Accept();
	cout<<"\nComparing...\n";
	a1.Display();
	a2.Display();

	if(a1==a2)
		cout<<"\nAddress Same!!\n";
	else
		cout<<"\nAddress different!!\n";

	return 0;
}
