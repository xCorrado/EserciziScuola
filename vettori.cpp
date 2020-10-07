#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int vet [5], i, num, somma=0;
			
				for (i=0; i<5; i++)
				{
					cout<<"dammi il numero"<<endl;
					cin>>num;
					vet [i]=num;
				}
				
				for (i=0; i<5; i++)
				{
					cout<<"il numero nel vettore e' "<<vet [i]<<endl;
				}
				
				for (i=0; i<5; i++)
				{
					somma=somma+vet [i];
				}
			cout<<"la somma e' "<<somma<<endl;
			return 0;
		}
