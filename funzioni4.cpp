#include<iostream>
#include<cstdlib>
using namespace std;
void modificauno ();
int globale;
	
	int main ()
	
	{
		int i;
		globale=10;
		cout<<globale<<endl;
		for (i=0; i<10; i++)
		{
			modificauno ();
			cout<<globale<<endl;
		}
	}
	
	void modificauno ()
	
	{
		
		
		globale=globale+20;
		
		
	}
	
	
