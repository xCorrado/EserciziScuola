#include<iostream>
#include<cstdlib>
using namespace std;
void modificauno ();
int globale;

	int main ()
	{
		globale=10;
		cout<<globale<<endl;
		modificauno ();
		cout<<globale<<endl;
	}
	
	void modificauno ()
	{
		globale=globale*2;
	}
