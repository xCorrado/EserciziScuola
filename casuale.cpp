#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

	int main ()
	
		{
			int casuale, num;
			
			srand (time (NULL));
			
			casuale=rand () %50 +1;
			
				do
				{
					cout<<"inserisci il numero"<<endl;
					cin>>num;
					
					if (casuale>num)
					{
						cout<<"il numero che cerchi e' maggiore"<<endl;
					}
					
					if (casuale<num)
					{
						cout<<"il numero che cerchi e' minore"<<endl;
					}
				
				} while (num!=casuale);
				
				cout<<"congratulazioni"<<endl;
				
			return 0;
		}
