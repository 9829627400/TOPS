#include<iostream>
using namespace std;
int days;
main()
{   
    cout<<"enter day"<<endl;
    cin>>days;
	
	
	switch(days)
	{
	case 1:
    cout<<"monday"<<endl;
	break;
	
	case 2:
	cout<<"tuesday"<<endl; 
	break;
	case 3:
    cout<<"wednesday"<<endl;
	break;
	case 4:
	cout<<"thrusday"<<endl;
    break;
	case 5:
	cout<<"friday"<<endl;
	break;
	case 6:
	cout<<"saturday"<<endl;
	break;
	case 7:
	cout<<"sunday"<<endl;
	break;
	default:
		cout<<"invalid day , please enter 1-7 weeks days"<<endl;
		
	}
	
}