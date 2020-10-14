#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

	int main ()
	
		{
			int A [5][7], i, j, casuale;
			
				srand (time (NULL));
				
				for (i=0; i<5; i++)
					
					{
						
						for (j=0; j<7; j++)
						
							{
								casuale= rand () %20 +1;
								A [i][j]=casuale;
							}
					}
					
				for (i=0; i<5; i++)
				{
					
						for (j=0; j<7; j++)
						{
							cout<<A [i][j]<<" ";
						}
						
					cout<<endl;
				}
		}
