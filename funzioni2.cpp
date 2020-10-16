#include<iostream>
#include<cstdlib>
using namespace std;
int differenza ();

	int main ()
	
		{
			int var, i=6;
			var=differenza ();
			cout<<var<<endl;
			cout<<i<<endl;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	int differenza ()
	{
		int x, y, diff=0, i=100;
		cout<<i<<endl;
		cout<<"dammi x"<<endl;
		cin>>x;
		cout<<"dammi y"<<endl;
		cin>>y;
		diff=x-y;
		return diff;
	}
