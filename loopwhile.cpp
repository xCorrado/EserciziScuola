#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

	int main ()
	
	{
		string codice, codice_massimo;
		int prezzo, max=0;
		while (2)
		{
			cout<<"inserisci il nome del gioco"<<endl;
			cin>>codice;
			if (codice=="0")
			{
				break;
			}
			cout<<"inserisci il prezzo di codesto"<<endl;
			cin>>prezzo;
		
			if (prezzo>max)
			{
				max=prezzo;
				codice_massimo=codice;
			}
		}
		cout<<"il gioco piu' costoso e' "<<codice_massimo<<endl;
	}
