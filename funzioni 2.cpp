#include<iostream>
#include<cstdlib>
using namespace std;
int differenza ();

	int main ()
	
		{
			int var;
			var=differenza ();
			cout<<var<<endl;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	int differenza ()
	{
		int x, y, diff=0;
		cout<<"dammi x"<<endl;
		cin>>x;
		cout<<"dammi y"<<endl;
		cin>>y;
		diff=x-y;
		return diff;
	}
