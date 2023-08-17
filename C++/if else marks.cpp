#include<iostream>
using namespace std;
main()
{   
    int marks;
	cout<<"Enter Your Marks"<<endl;
	cin>>marks;
	
	cout<<"your marks is : "<<marks<<endl;
	
	if(marks<=33)
	{
      cout<<"fail"<<endl;	
	}
	else if(marks>=34 && marks<=60)
    {
    cout<<"C grade"<<endl;
    }
    else if(marks>=61 && marks<=85)
    {
	cout<<"b grade"<<endl;
    }
    else if(marks>=86 && marks<=100)
    {
	cout<<" A grade"<<endl;
    }
   else
    {
	cout<<"enter your valid marks"<<endl;
    }
}