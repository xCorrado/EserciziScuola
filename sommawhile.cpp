#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, num, i=0, somma=0;
			cout<<"quanti numeri??"<<endl;
			cin>>n;
			
				while (i<n)
				
					{
						cout<<"inserisci il numero"<<endl;
						cin>>num;
						somma=somma+num;
						i++;
					}
				cout<<"la somma e' "<<somma<<endl;
			return 0;
		}
