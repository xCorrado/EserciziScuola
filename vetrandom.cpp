#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

	int main ()
	
		{
			int vet [60000], i, casuale, num, countpari=0, countdisp=0;
			
			srand (time (NULL));
				
			for (i=0; i<60000; i++)
				
				{
					casuale=rand () %100 +1;
					vet [i]=casuale;
				}
				
			for (i=0; i<60000; i++)
			
				{
					cout<<" "<<vet [i];
				}
				
			for (i=0; i<60000; i++)
			
				{
					if (vet [i]%2==0)
					{
						countpari=countpari+1;
					}
					
					if (vet [i]%2!=0)
					
					{
						countdisp=countdisp+1;
					}
				}
			
			cout<<"i numeri pari sono "<<countpari<<endl;
			cout<<"mentre quelli dispari "<<countdisp<<endl;
		
		return 0;	
		}
	
