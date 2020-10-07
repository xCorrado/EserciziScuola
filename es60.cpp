#include<iostream>
#include<cstdlib>
const int ANNO_CORRENTE=2020;
const int NUM_DIP=5;
using namespace std;
	
	int main ()
	{
		int i, countmin=0, countpens=0, anno_nascita, eta;
			
			while (i<NUM_DIP)
			{
				cout<<"inserisci la data di nascita"<<endl;
				cin>>anno_nascita;
				eta=ANNO_CORRENTE-anno_nascita;
				i++;
				
				if (eta>=65)
			{
				countpens=countpens+1;
			}
			
			if (eta<18)
			{
				countmin=countmin+1;
			}
			}
			cout<<"i pensionati sono"<<countpens<<endl;
			cout<<"i minorenni sono"<<countmin<<endl;
			
		return 0;
	}
