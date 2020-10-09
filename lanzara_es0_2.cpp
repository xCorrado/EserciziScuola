#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			string persone [5], persona; 
			int stipendi [5], stipendio, i, num1, num2, countstipendio=0, countpersona=0;
			
				for (i=0; i<5; i++)
					
					{
						cout<<"inserisci il nome della persona"<<endl;
						cin>>persona;
						persone [i]=persona;
						cout<<"inserisci il rispettivo stipendio"<<endl;
						cin>>stipendio;
						stipendi [i]=stipendio;
					}
					
				cout<<"inserisci il range"<<endl;
				cin>>num1;
				cin>>num2;
					
				for (i=0; i<5; i++)
				
					{
						if (stipendi [i]>=num1 && stipendi [i]<=num2)
						{
							cout<<persone [i]<<" "<<stipendi [i]<<endl;
						}
					}
					
			return 0;
				
		}
