#include<iostream>
#include<cstring>
using namespace std;
class Emp{
	private:
		int empid;
//		char name[20];
		string name;//std::string name;
		float sal;
	public:
	/*	//default contr
		Emp(){
		empid=0;
		strcpy(name,"abc");
		sal=0;
		cout<<"default";
		}

		*/
/*		// paramaterized contr
		Emp(const char *x,int eid,float s){
			empid=eid;			
			strcpy(name,x);
			sal=s;	
			cout<<"Param";	
		}

*/
		//Constr using Intilialization List
	
		Emp(int eid,float s,const char *x):empid(eid),sal(s),name(x)
		
//		Emp(int eid,float s,string x):empid(eid),sal(s),name(x)
		{
		cout<<"Init";
		}


		void Accept(){
			cout<<"Name"<<endl;
			cin>>name;
			cout<<"Eid"<<endl;
			cin>>empid;
			cout<<"Salary"<<endl;
			cin>>sal;
		}
 
 		void Display(){
                  	cout<<"Name"<<name<<endl;
                        cout<<"Eid"<<empid<<endl;
                        cout<<"Salary"<<sal<<endl;
                }

};
int main()
{	
	Emp e{123,2222.22,"xyzyzyzy"};
	
//	e.Accept();
	e.Display();
	return 0;
}

	

