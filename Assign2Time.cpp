/*Create Time class with data members
hours
minutes
seconds
and implement following
 Default constructor
 Parameterized constructor
 Destructor

 Function for display data
 Function to compare two time objects
 Function to find out difference between
two time objects*/


#include<iostream>
#include<iomanip>
using namespace std;
class Time
{

	private:
	int hr,minute,sec;
	int i=0;

	public:
	Time()
	{ 
		hr=0;
		minute=0;
		sec=0;
	}

	Time(int h, int m, int s)
	{
		hr=h;
		minute=m;
		sec=s;
	}

	void Accept()
	{
		cout<<"\nEnter hours: ";
		cin>>hr;
		cout<<"\nEnter minutes: ";
		cin>>minute;
		cout<<"\nEnter seconds: ";
		cin>>sec;
	}

	void Display()
	{
		cout<<"\n"<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<minute<<":"<<setw(2)<<setfill('0')<<sec<<endl;
	}

	void Compare(Time &t){
		//Checking Equal
		if(t.hr==hr && t.minute==minute && t.sec==sec){
			cout<<"Time Matched Both are same... ";
			i=0;
		}
		//Checking Greater hrs
		else if(t.hr>hr){
                        cout<<"T2 is greater";
                        i=1;
                }
		//Checking equal hrs and greater minutes
		else if(t.hr==hr && t.minute>minute){
                        cout<<"T2 is greater";
			i=2;
		}
		
		//Checking equal hrs and equal minutes and greater seconds	      
		else if(t.hr==hr && t.minute==minute && t.sec>sec){
			
                        cout<<"T2 is greater";
			i=3;
		}
		else{
			cout<<"T1 is greater";
		i=-1;
		}
	}

	void Difference(Time &t){
		
		int t1=0, t2=0,h=0,m=0,s=0;
	        t1=(hr*60*60)+(minute*60)+sec;	
	        t2=(t.hr*60*60)+(t.minute*60)+t.sec;
        	if(t1==t2)
		cout<<"\nBoth times are same.";
		 if (t1>t2)
		{
			int td=t1-t2;
			h=td/3600;
			td=td-(h*3600);
			m=td/60;
			td=td-(m*60);
			s=td;	
		}
		
		if(t2>t1)
		{
			int td=t2-t1;
			h=td/3600;
			td=td-(h*3600);
			m=td/60;
			td=td-(m*60);
			s=td;			
		}
		cout<<"Difference is "<<h<<" hrs "<<m<<" minutes "<<s<<" sec ";
	}
};
int main()
{
	Time t,tp(4,8,12),t1,t2;
	t.Display();
	tp.Display();
	t1.Accept();
	t2.Accept();
	t1.Display();
	t2.Display();
	t1.Compare(t2);
	t1.Difference(t2);

	return 0;
}
