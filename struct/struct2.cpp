#include<iostream>
using namespace std;
struct family
{
	private:
		int cash,gold;
	public:
		void set_data(void )
		{
			cin>>cash>>gold;
		}
		void get_data(void )
		{
			cout<<cash<<gold;
		}

};

int main()
{
	struct family v;
	v.set_data();
	v.get_data();

}


