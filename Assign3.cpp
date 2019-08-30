/*Create Date class with data members
dd
mm
yyyy
and implement following
 Default constructor
 Parameterized constructor
 Destructor
 Function to find out difference between two
dates
 Function to compare dates
 Separate header and implementation files
 Overlaod ==, !=, +, - operator
*/

#include<iostream>
using namespace std;
int diff=0,ly=0;
class Date{
	private:
	int d,m,y,td;
	
	public:
		//Default Const
		Date(){
		d=0;
		m=0;
		y=0;
		}
		//Param Const
		Date(int d,int m,int y){
		 d=d;
		 m=m;
		 y=y;
		}
		void Accept(){
		cout<<"Enter Date:"<<endl;
		cin>>d;
		cin>>m;
		cin>>y;
		}

		void Display(){
		cout<<"\nDate:"<<d<<"-"<<m<<"-"<<y<<endl;
		}
		
	
		//Calculating Total Days
		void TD(){
			td=0;//Total Days
		//Adding Days	
			td=td+d;
		//checking for leap year
                if((y%100==0 && y%400==0) || (y%100!=0 && y%4==0) )
                                ly=1;
                        else
                                ly=0;
		//Adding Months
		for(int i=1;i<12;i++){
			if(i<m){
				if(i==1)//Jan
					td=td+31;
				else if(i==2)//Feb
				{
					if(ly==1)
						td=td+29;
					else
						td=td+28;
				}
				else if(i==3)//Mar
					td=td+31;
				else if(i==4)//Apr
                                        td=td+30;						
				else if(i==5)//May
                                        td=td+31;
				else if(i==6)//Jun
                                        td=td+30;
                                else if(i==7)//July
                                        td=td+31;
                                else if(i==8)//Aug
                                        td=td+31;
				 else if(i==9)//Sep
                                        td=td+30;
                                else if(i==10)//Oct
                                        td=td+31;
                                else if(i==11)//Nov
                                        td=td+30;

			}
		}

		//Adding Years
		for(int i=1;i<y;i++){		
	                if((i%100==0 && i%400==0) || (i%100!=0 && i%4==0) )
				td=td+366;
			else
				td=td+365;
		}

//		cout<<"\nTotal Days"<<td<<endl;

		}

		void Diff(Date d2){
			diff=td-d2.td;
			if(diff<0)
				diff=diff*(-1);
			cout<<"\nDifference:"<<diff<<endl;
		}
};


int main(){
	
	Date d1,d2;
	
	d1.Accept();
	d2.Accept();
	d1.Display();
	d2.Display();
	d1.TD();
	d2.TD();
	d1.Diff(d2);

	return 0;
}
