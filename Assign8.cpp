/*Create MobilePhone class with data members
ModelNo
Price
Manufacturer
Quantity

Implement followings
 Default constructor
 Parameterized constructor
 Accept Function for data input
 Display function for data display
 Function to search MobilePhone model
availability
 Write menu driven program with following
menus

o Add Mobile
o Display List of available mobiles
o Find out quantity of particular
mobile type
o Find out availability of Particular
model*/

#include<iostream>
#include<string>
using namespace std;
class Mobile{
	
	private:
		string ModelNo;
		int Price;
		string Manufacturer;
		int Quantity;

	public:
		//Default constr
		Mobile():ModelNo(""),Price(0),Manufacturer(""),Quantity(0){}

		//Param Constr
		Mobile(string m,int p,string man,int q):ModelNo(m),Price(p),Manufacturer(man),Quantity(q){}

		//Accepting
		void Accept(){
			cout<<"\nEnter Mobile details.."<<endl;
			cout<<"\n ModelNo:";
			cin>>ModelNo;
			cout<<"\n Price: ";
			cin>>Price;
			cout<<"\n Manufacturer: ";
			cin>>Manufacturer;
			cout<<"\n Quantity: ";
			cin>>Quantity;
		}
		//Displaying
		void Display(){
			//cout<<"\nMobile details"<<endl;
			cout<<"\n ModelNo:"<<ModelNo;
			cout<<"\n Price: "<<Price;
			cout<<"\n Manufacturer: "<<Manufacturer;
			cout<<"\n Quantity: "<<Quantity;
		}

		void checkQuantity(){
			cout<<"Quantity:"<<Quantity;
		}

		void Availability(){
			if(Quantity>0)
				cout<<"Available: Yes";
			else
				cout<<"Available: No";	
		}
};

int showMenu(){
	int n=0;
	cout<<"\nMenu:\n";
	cout<<"\n1.Add Mobile";
	cout<<"\n2.Display List of available mobiles";
	cout<<"\n3.Find out quantity of particular mobile type";
	cout<<"\n4.Find out availability of Particular model";
	cout<<"\n0.To Quit";

	cout<<"\nEnter menu option to Proceed:\n";
	cin>>n;
	return n;
}

int main()
{	
	int listSize=3;
	Mobile m[listSize];
	//Mobile m("",0,"",0);
	int n;
	n=showMenu();
	while(n!=0){	
			if(n==1)
				{
				for(int i=0;i<listSize;i++){
					cout<<"\nEnter "<<i+1;
					m[i].Accept();	
					}
				}
			else if(n==2){
				for(int i=0;i<listSize;i++){
					cout<<"\nMobile Phone"<<i+1;
					m[i].Display();	
				}
			}
			else if(n==3){
				for(int i=0;i<listSize;i++){
					cout<<"\nMobile Phone"<<i+1;
					m[i].checkQuantity();
				}
			}
			else if(n==4){
				for(int i=0;i<listSize;i++){
					cout<<"\nMobile Phone"<<i+1;
					m[i].Availability();
				}
			}
			else 
				cout<<"\n Invalid Input";
		n=showMenu();
	}

	return 0;
}
