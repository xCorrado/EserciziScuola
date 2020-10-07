#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int vet [10], num, i, sommapari=0, sommadisp=0;
			
				for (i=0; i<10; i++)
				{
					cout<<"inserisci un numero"<<endl;
					cin>>num;
					vet [i]=num;
				}
				
				for (i=0; i<10; i++)
				{
					if (i%2==0)
					{
						sommapari=sommapari+vet[i];
					}
					
					if (i%2!=0)
					{
						sommadisp=sommadisp+vet[i];
					}
				}
			cout<<"la somma dei pari e' "<<sommapari<<endl;
			cout<<"la somma dei dispari e' "<<sommadisp<<endl;
			return 0;
		}
