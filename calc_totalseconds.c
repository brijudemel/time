#include<iostream>
using namespace std;
class time
{
	public:
		int hours,minutes,seconds,total_seconds;
		get();
		display();
		total_sec();
};
time:: get()
{
	cout<<"Hours:\t";
	cin>>hours;
	while(true)
	{
	cout<<"\nMinutes:\t";
	cin>>minutes;
	if(minutes<60)
	{
		break;
	}
	else
	{
		cout<<"Invalid input. A hour has only 60 minutes, enter a value from 0 to 59.\n";
	}
	}
	while(true)
	{
	cout<<"\nSeconds:\t";
	cin>>seconds;
	if(seconds<60)
	{
		break;
	}
	else
	{
		cout<<"Invalid input. A minute has only 60 seconds, enter a value from 0 to 59.\n";
	}
	}
	cout<<"\n";
	
}
time::total_sec()
{
	total_seconds=seconds+(minutes*60)+(hours*3600);
}
time::display()
{
	cout<<"The time is = ";
	if(hours<10)
	{
		cout<<"0";
	}
	cout<<hours<<":";
	if(minutes<10)
	{
		cout<<"0";
	}
	cout<<minutes<<":";
	if(seconds<10)
	{
		cout<<"0";
	}
	cout<<seconds<<endl;
	cout<<"Time in total seconds: "<<total_seconds;
}
int main()
{
	time ob;
	ob.get();
	ob.total_sec();
	ob.display();
}
