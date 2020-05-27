#include<iostream>
using namespace std;
class clock{
	private:
	int HH;
	int MM;
	int SS;
	int totalseconds;
	public:
		createaclock();
		timeinseconds();
};
clock ::createaclock(){
	cout<<"enter time:"<<endl;
	cout<<"hours?";
	cin>>HH;
	cout<<"minutes?";
	cin>>MM;
	cout<<"seconds?";
	cin>>SS;
	cout<<"the time is="<<HH<<":"<<MM<<":"<<SS<<endl;
}
clock :: timeinseconds(){
	totalseconds = HH*3600+MM*60+SS;
	cout<<"time in totalseconds:"<<totalseconds;
}
main()
{
	clock c1;
	c1.createaclock();
	c1.timeinseconds();
}
