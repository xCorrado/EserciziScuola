#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int num, i=1, giornomax=0, max=0;
			
				while (i<9) 
					
					{
						cout<<"inserisci il num di copie del giorno "<<i<<endl;
						cin>>num;
						
							if (num>max)
							
							{
								giornomax=i;
								max=num;
							}
						i++;
					}
				
				cout<<"il giorno in cui, ci sono state piu' copie vendute e' "<<giornomax<<endl;
				
			return 0;
		}
