#include<iostream>
#include<cstdlib>
using namespace std;
int somma (int x, int y);

	int main ()
	
		{
			int sommaMain, num1, num2;
			sommaMain=somma (6, 10);
			cout<<sommaMain<<endl;
			cout<<"num 1"<<endl;
			cin>>num1;
			cout<<"num 2"<<endl;
			cin>>num2;
			sommaMain=somma (num1, num2);
			cout<<sommaMain<<endl;
		}
		
	int somma (int x, int y)
	{
		int sommaloc=0;
		sommaloc=x+y;
		return sommaloc;
	}
