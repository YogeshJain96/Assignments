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


int main(){
	
	Emp e;
	e.Accept();
	e.Display();
	e.Calculate();
	return 0;
}
