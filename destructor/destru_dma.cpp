// deallocate DMA using userdefined deconstructor 
#include<iostream>
using namespace std;
class vijay 
{
	char *s;
	public:
	vijay ()	// constructor 
	{
		cout<<"constructor"<<endl;
		s=new char[20];
	}
	~ vijay ()	// deconstructor 
	{
		cout<<"Destructor"<<endl;
		delete [] s;
	}

};
int main()
{
	vijay a;
}
