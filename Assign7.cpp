/*Create Payslip class with data members
EmpNo
EmpName
DA
HRA
BasicSalary
Implement followings
 Default constructor
 Parameterized constructor
 Accept Function for data input
 Display function for data display
 Function to calculate salary from DA, HRA and
Basic Salary
 Separate header and implementation files*/



#include "Assign7.h"


		//Default Constructor
		Emp::Emp(){
			EmpNo=0;
			EmpName="";
			DA=0;
			HRA=0;
			BasicSalary=0;
			Salary=0;
		}
		
		//Param Constr
		Emp::Emp(int a,string b,int c,int d,int e){
			EmpNo=a;
			EmpName=b;
			DA=c;
			HRA=d;
			BasicSalary=e;
			Salary=c+d+e;
		}
		
	void Emp:: Accept(){
			cout<<"Enter Emp no."<<endl;
			cin>>EmpNo;
			cout<<"\nName";
			cin>>EmpName;
			cout<<"\nDA"<<endl;
			cin>>DA;
			cout<<"\nHRA"<<endl;
			cin>>HRA;
			cout<<"\nBasic Salary"<<endl;
			cin>>BasicSalary;
			}
	void Emp:: Display(){
			cout<<"\nEmp no.:"<<EmpNo<<"\nName:"<<EmpName<<"\nDA:"<<DA<<"\nHRA:"<<HRA<<"\nBasic Salary:"<<BasicSalary;
			}

		void Emp:: Calculate(){
			Salary=HRA+DA+BasicSalary;
			cout<<"\nSalary:"<<Salary;
				}
