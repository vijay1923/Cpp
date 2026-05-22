#include<iostream>
using namespace std;
void clock(int seconds)
{
	int hour,min,sec;
	hour=seconds/3600; // 	TO CONVERT SECONDS TO HOURS
	seconds=seconds%3600;	// TO TAKE REMAINIG SECONDS AFTRE THE HOURS 
	min=seconds/60;		// TO CONVERT SECONDS INTO MIN
	sec=seconds%60;		// TOTAKE REMAINIG SECONDS AFTER MINUTS

	cout<<hour<<":"<<min<<":"<<sec<<endl;
}
int main()
{
	int temp;
	cout<<"Enter the seconds"<<endl;
	cin>>temp;
	clock(temp);

}
