#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, i, num, media=0, somma=0;
			cout<<"quanti numeri???"<<endl;
			cin>>n;
			
				while (i<n)
				
					{
						cout<<"dammi il numero"<<endl;
						cin>>num;
						somma=somma+num;
						i++;
					}
					media=somma/n;
				cout<<"la media dei numeri che mi hai dato e' "<<media<<endl;
			return 0;
		}
