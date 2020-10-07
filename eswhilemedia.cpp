#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, i, num, somma=0, media;
			cout<<"quanti numeri vuoi inserire??"<<endl;
			cin>>n;
			
				while (i<n)
					
					{
						cout<<"inserisci il numero"<<endl;
						cin>>num;
						somma=somma+num;
						i++;
					}
				media=somma/n;
				cout<<"la media dei numeri che mi hai dato e' "<<media<<endl;
				return 0;
		}
