/*Create Player class with data members
name
age
country
Implement followings
 Default constructor
 Parameterized constructor
 Function to Sort Array of Player objects
(implement as global, sorting should be one
name and age)
 Accept Function for data input

 Display function for data display
 Separate header and implementation files
 In main function create array of player objects
and pass it to Sort function and print sorted
player list*/

#include<iostream>
#include<string>
using namespace std;
class Player{
	public:
		string name;
		int age;
		string country;
	//public:
		//Default constr
		Player():name(""),age(0),country(""){}

		//Param Constr
		Player(string n,int a,string c):name(n),age(a),country(c){}

		//Accepting
		void Accept(){
			//cout<<"\nEnter Player details"<<endl;
			cout<<"\nName: ";
			cin>>name;
			cout<<"\nAge: ";
			cin>>age;
			cout<<"\nCountry: ";
			cin>>country;
		}
		void Display(){
			//cout<<"\nPlayer details"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Country:"<<country<<endl;
		}

	// void Sort(Player p[],int size){
	
	// //Sorting

	// //sorting via Age
	// for(int i=0;i<size;i++){
	// 		for(int j=0;j<size-1;j++){
	// 			if(p[j].age>p[j+1].age)
	// 			{
	// 				Player temp;
	// 				temp=p[j];
	// 				p[j]=p[j+1];
	// 				p[j+1]=temp;
	// 			}

	// 		}
	// 	}
	// //sorting via Name

	// //Displaying Sorted Array
	// for(int i=0;i<size;i++)
	// 		p[i].Display();
 //  }

};

void Sort(Player p[],int size){
	
	//Sorting

	//sorting via Age
	for(int i=0;i<size;i++){
			for(int j=0;j<size-1;j++){
				if(p[j].age>p[j+1].age)
				{
					Player temp;
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}

			}
		}
	//sorting via Name
		for(int i=0;i<size;i++){
			for(int j=0;j<size-1;j++){
				if(p[j].name>p[j+1].name)
				{
					Player temp;
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}

			}
		}
	//Displaying Sorted Array
	for(int i=0;i<size;i++)
			p[i].Display();
}

int main()
{
	// Player pd,pp("ParamContr",22,"IndCPP");
	// pd.Display();
	// pp.Display();
	//-------------------------
	int size=2;
	Player p[size];
	cout<<"\nEnter Player details"<<endl;
		for(int i=0;i<size;i++)
			p[i].Accept();

	cout<<"\n\nPlayer details"<<endl;
		for(int i=0;i<size;i++)
			p[i].Display();

	cout<<"\nSorted Player details"<<endl;
//	p[0].Sort(p,size);
		Sort(p,size);
	
	return 0;
}
