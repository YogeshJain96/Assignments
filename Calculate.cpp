#include<iostream>
using namespace std;
class Calculate{

	
	public:
	void add(int a,int b)
	{
		int c;
		c=a+b;
		cout<<"\n addition of two nos. is:\t"<<c;
	
	}
	void sub(int m,int n)
	{
		int p;
		p=m-n;
		cout<<"\n subtraction of two nos.:\t"<<p;
	
	}	
	void mul(int x,int y)
	{
		int z;
		z=x*y;
		cout<<"\n multiplication of two nos. is\t"<<z;
	
	
	}
	void divide(int c,int d)
	{	float e;
	
			e=(float)c/d;
			cout<<"division of two nos. is:\t"<<e;
	}
};
int main()
{	Calculate s;
	int s1,s2;
	cout<<"\n enter two nos.:\t";
	cin>>s1>>s2;
	s.add(s1,s2);
	s.sub(s1,s2);
	s.mul(s1,s2);
	s.divide(s1,s2);
	return 0;
}

	

