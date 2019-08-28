/*1. Create Student class with data members
RollNo
Name
Course
and implement following
 Default constructor
 Parameterized constructor
 Destructor
 Function to accept data
 Function for display data
 Write main function and create array of
students and store data of multiple
students in array.
 Write Function to find student by Roll No
*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
	int rn;
	string name;
	string course;

	public:
		Student()
		{
			rn=0;
		        name= "NA";
			course= "None";
		}
	 
	        Student(int r,string n, string c)
		{
			rn=r;
			name=n;
			course=c;
		}

		void Accept()
		{
			cout<<"\nEnter roll no: ";
			cin>>rn;

			cout<<"\nEnter name: ";
			cin>>name;

			cout<<"\nEnter course: ";
			cin>>course;
		}

		void Display()
		{
			cout<<"\nStudents Details: "<<endl;

			cout<<"\nRoll no: "<<rn;
			cout<<"\nName: "<<name;
			cout<<"\nCourse: "<<course<<endl;
			
		}
		void Find(int r)
		{

			if(r==rn)
			{	cout<<"\nFound  roll no: "<<r;
				cout<<"\nName: "<<name;
				cout<<"\nCourse: "<<course<<endl;				
			}

		}

		~Student(){
			cout<<"\nDestructor accessed.";
		}
};

int main()
{
	int n;

	//Size of Student
	cout<<"\nEnter total number of students for entering students record: ";
	cin>>n;
	
	//Declarin N Arrays
	Student	*s = new Student[n];
	cout<<"Enter Details of Student..";
	//Accepting N Arrays
	for(int i=0;i<n;i++)
	{
		s[i].Accept();
	}
	cout<<"\n You Entered the Following Details...\n";
	//Displaying N Arrays
	for(int i=0;i<n;i++)
        {
                s[i].Display();
        }
	int rollno;
	cout<<"\nEnter Roll No. to Find"<<endl;
	cin>>rollno;
	for(int i=0;i<n;i++)
        {
               s[i].Find(rollno);
	}

	delete	[]s;

	return 0;
}
        
