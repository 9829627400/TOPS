#include<iostream>
using namespace std;
char alpha;
int vowels;
main()
{
	cout<<"inter any alphabet to check it is vowel or not"<<endl;
	cin>>alpha;
	
  switch(alpha)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  cout<<"vowel"<<endl;
  break;
  default:
  cout<<"consonent"<<endl;
  	
  }
  
}