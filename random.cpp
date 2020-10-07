#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

	int main ()
	
		{
			int i,casuale;
			
			srand (time (NULL));
			
			
			for (i=0; i<10; i++)
			
			{
			
			casuale=rand () %100000000 +1;
			cout<<casuale<<endl;
		
			
			}
		
			return 0;
		}
