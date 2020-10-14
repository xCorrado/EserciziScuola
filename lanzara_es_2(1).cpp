#include<iostream>
#include<cstdlib>
#include<time.h>
const int N=10;
using namespace std;

	int main ()
		
		{
			int A [N], B [N], i, casuale, C [N], D [N], k=0;
			
			float mediaA, mediaB, sommaA=0, sommaB=0;
				
				srand (time (NULL));
				
				for (i=0; i<N; i++)
					
					{
						casuale= rand () %30 +1;
						A [i]=casuale;
						
						casuale= rand () %5 +1;
						B [i]=casuale;
					}
					
				cout<<"A"<<" "<<"B"<<endl;
				cout<<endl;
					
				for (i=0; i<N; i++)
					
					{
						cout<<A [i]<<" "<<B [i]<<endl;
					}
					
				for (i=0; i<N; i++)
				
					{
						sommaA=sommaA+A [i];
						sommaB=sommaB+B [i];
					}
					
				cout<<endl;
				
				mediaA=sommaA/N;
				mediaB=sommaB/N;
				
				cout<<"la media dell'array A e' "<<mediaA<<endl;
				
				cout<<"la media dell' array B e' "<<mediaB<<endl;
					
				for (i=0; i<N; i++)
				
					{
						if (A [i]>B [i])
							
							{
								C [i]=A [i];
							}
							
						if (B [i]>A [i])
						
							{
								C [i]=B [i];
							}
							
						if (B [i]==A [i])
						
							{
								C [i]=B [i];
							}	
					}
					
				cout<<endl;
					
				for (i=0; i<N; i++)
					
					{
						cout<<C [i]<<" ";
					}
					
				cout<<endl;
					
				for (i=N-1; i>=0; i--)
				
					{
						D [k]=C [i];
						k++; 
					}
					
				for (i=0; i<N; i++)
				
					{
						cout<<D [i]<<" ";
					}
					
		}
