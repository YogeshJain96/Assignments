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
#include<iostream>
#include<string>
using namespace std;

class Emp{
	private:
		int EmpNo;
		string EmpName;
		int DA,HRA,BasicSalary,Salary;

	public:
		//Default Constructor
		Emp();
		
		//Param Constr
		Emp(int a,string b,int c,int d,int e);
		
		void Accept();
		void Display();
		void Calculate();
};

