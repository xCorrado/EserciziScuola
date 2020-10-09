#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

	int main ()
	
		{
			string squadra [6], nome, squadraa, classif [6], vincitrice;
			char serie [6], seriee;
			int punteggio [6], punt, i, k=0, punteggiofin=0;
			
				for (i=0; i<6; i++)
				{
					cout<<"inserisci la squadra di calcio"<<endl;
					cin>>nome;
					squadra [i]= nome;
					
					cout<<"che serie?"<<endl;
					cin>>seriee;
					serie [i]= seriee;
					
					cout<<"inserisci il punteggio in classifica"<<endl;
					cin>>punt;
					punteggio [i]= punt; 
				} 
				
				cout<<"ELENCO SQUADRE SERIE A"<<endl;
				cout<<"SQUADRA"<<" "<<"PUNTEGGIO"<<endl;
				
				for (i=0; i<6; i++)
				{
					if (serie [i]=='a')
					{
						cout<<squadra [i]<<" "<<punteggio [i]<<endl;
					}
				}
				
				cout<<"dammi il nome della squadra"<<endl;
				cin>>squadraa;
				
				for (i=0; i<6; i++)
				{
					if (squadraa==squadra [i])
					{
						cout<<"la squadra gioca in serie "<<serie [i]<<endl;
					}
				}
				
				for (i=0; i<6; i++)
				{
					if (serie [i]=='b')
					{
						classif [k]=squadra [i];
						k++;
					}
				}
				
				for (i=0; i<k+1; i++)
				{
					cout<<" "<<classif [i];
				}
				
				cout<<endl;
				
				for (i=0; i<6; i++)
				{
					if (serie [i]=='a')
					{
						if (punteggio [i]>punteggiofin)
						{
							punteggiofin=punteggio [i];
							vincitrice=squadra[i];
						}
					}
				}
				
				cout<<"la squadra vincitrice e' "<<vincitrice<<endl;
				return 0;
		}
