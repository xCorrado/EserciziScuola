#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

	int main ()
	
		{
			int vet [10], i, casuale, num;
			
			srand (time (NULL));
				
			for (i=0; i<10; i++)
				
				{
					casuale=rand () %100 +1;
					vet [i]=casuale;
				}
			
			for (i=0; i<10; i++)
			
				{
					cout<<" "<<vet [i];
				}
			
			cout<<endl;
				
			for (i=9; i>=0; i--)
				
				{
					cout<<" "<<vet [i];
				}
				 
		return 0;
		
		}
