#include<iostream>
#include<cstdlib>
const int N=5;
using namespace std;

	int main ()
	
		{
			int v[N], i, numero, somma=0, prodotto=1;
			
			cout<<"carica il vettore"<<endl;
			
				for (i=0; i<N; i++)
				
					{
						cout<<"inserisci il valore"<<endl;
						cin>>numero;
						v[i]=numero;
					}
					
				for (i=0; i<N; i++)
					
					{
						if (i%2==0)
						{
							somma=somma+v[i];
						}
						
						if (i%2!=0)
						{
							prodotto=prodotto*v[i];
						}
					}
					
				cout<<"la somma dei valori nelle celle pari del vettore e' "<<somma<<endl;
				cout<<"il prodotto dei valori nelle celle dispari del vettore e' "<<prodotto<<endl;
				
			return 0;
				
		}
