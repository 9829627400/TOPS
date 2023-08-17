#include<iostream>
using namespace std;
char mobilename[20];

samsung()
{
  int quantity;
  cout<<"SAMSUNG\n"<<endl;
  cout<<"enter your phone name you want to buy"<<endl;
  cin>>mobilename;
 
  cout<<"number of phone you want to buy"<<endl;
  cin>>quantity;
	
  if(quantity>=100)
  { 
  cout<<"not in stock"<<endl;
  }
  int bill;
  cout<<"billing option:"<<endl;
  cin>>bill;
  
  cout<<"please pay your payment at billing counter"<<endl;
  
  
} 
int iphone()
{
	int quantity;
  cout<<"IPHONE\n"<<endl;
  cout<<"enter your phone name you want to buy"<<endl;
  cin>>mobilename;
 
  cout<<"number of phone you want to buy"<<endl;
  cin>>quantity;
	
  if(quantity>=150)
  { 
  cout<<"not in stock"<<endl;
  }
  int bill;
  cout<<"billing option:"<<endl;
  cin>>bill;
	cout<<"please pay your payment at billing counter"<<endl;
}
google()
{
	
	int quantity;
  cout<<"GOOGLE\n"<<endl;
  cout<<"enter your phone name you want to buy"<<endl;
  cin>>mobilename;
 
  cout<<"number of phone you want to buy"<<endl;
  cin>>quantity;
	
  if(quantity>=50)
  { 
  cout<<"not in stock"<<endl;
  }
  int bill;
  cout<<"billing option:"<<endl;
  cin>>bill;
  cout<<"please pay your payment at billing counter"<<endl;
}
mi()
{
	
	int quantity;
  cout<<"MI\n"<<endl;
  cout<<"enter your phone name you want to buy"<<endl;
  cin>>mobilename;
 
  cout<<"number of phone you want to buy"<<endl;
  cin>>quantity;
	
  if(quantity>=80)
  { 
  cout<<"not in stock"<<endl;
  }
  int bill;
  cout<<"billing option:"<<endl;
  cin>>bill;
  cout<<"please pay your payment at billing counter"<<endl;
}
oneplus()
{
	int quantity;
  cout<<"ONE PLUS\n"<<endl;
  cout<<"enter your phone name you want to buy"<<endl;
  cin>>mobilename;
 
  cout<<"number of phone you want to buy"<<endl;
  cin>>quantity;
	
  if(quantity>=100)
  { 
  cout<<"not in stock"<<endl;
  }
  int bill;
  cout<<"billing option:"<<endl;
 cin>>bill;
  cout<<"please pay your payment at billing counter"<<endl;
}

int basic()
{
	char name[20];
	char loaction[20];
    char email[20];
	int age;
	int contact;
	
  cout<<"enter your name : "<<endl;
  gets(name);
  
  cout<<"enter your loaction : " <<endl;
  gets(loaction);
  
  cout<<"enter your age : " <<endl;
  cin>>age;
  
  cout<<"enter your contact : "<<endl;
  cin>>contact;
  
  cout<<"enter your email : "<<endl;
  cin>>email;
   
  int brand;
  
  cout<<"INTRUCTION\n1=samsung  2=i-phone\n3=google  4=one plus\n5=realme"<<endl;
  cout<<"enter your mobile brand number with the help of given intruction "<<endl;
  cin>>brand;

  if(brand==1)
  {
  	samsung();
  }
  else if(brand==2)
  {
  	iphone();
  }
  else if(brand==3)
  {
  	google();
  }
  else if(brand==4)
  {
  	mi();
  }
  else if(brand==5)
  {
  	oneplus();
  }
  else
  {
  	cout<<"not in stock"<<endl;
  }
	
}
main()
{
	basic();
}