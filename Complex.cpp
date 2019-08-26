#include<iostream>
using namespace std;
class Complex{
	private:	
	int r;
	int i;	

	public:
	void Accept(){
		cout<<"Real"<<endl;	
		cin>>r;
		cout<<"Img"<<endl;	
		cin>>i;
	}
	void Display(){;
		cout<<r<<"+"<<i<<"j"<<endl;	
	}
};

int main(){
	Complex c;
	c.Accept();
	c.Display();
	return 0;
}

