#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
			
		{
			int vet [5], i, voto, somma, votiin=0, votisu=0;
			float	media=0;
			for (i=0; i<5; i++)
			{
				cout<<"inserisci i voti dello studente"<<endl;
				cin>>voto;
				vet [i]=voto;
			}
			
			for (i=0; i<5; i++)
			{
				somma=somma+vet [i];
			}
			
			media=somma/5;
			
			cout<<"la media e' "<<media<<endl;
			
			for (i=0; i<5; i++)
			{
				
				if (vet [i]<6)
				{
					votiin=votiin+1;
				}
				
				if (vet [i]>=6)
				{
					votisu=votisu+1;
				}
				
			}
			
			cout<<"i voti insufficienti sono "<<votiin<<endl;
			cout<<"i voti sufficienti sono "<<votisu<<endl;
			
		return 0;
		}
