#include<iostream>
#include<cstdlib>
#include<time.h>
const int N=10;
const int M=8;
using namespace std;

	int main ()
	
		{
			int A [N][M], i, j, casuale, somma=0, media, B [N][M], sommaB=0;
			
			srand (time (NULL));
			
				for (i=0; i<N; i++)
				{
					for (j=0; j<M; j++)
					{
						casuale=rand () %20 +1;
						A [i][j]=casuale;
					}
				}
				
				for (i=0; i<N; i++)
				{
					for (j=0; j<M; j++)
					{
						cout<<A [i][j]<<" ";
					}
				cout<<endl;
				}
				
				for (i=0; i<N; i++)
				{
					for (j=0; j<M; j++)
					{
						somma=somma+A [i][j];
					}
				}
				
				media=somma/(N*M);
				cout<<endl;
				cout<<"la media dei valori della matrice e' "<<media<<endl;
				cout<<endl;
				for (i=0; i<N; i++)
				{
					for (j=0; j<M; j++)
					{
						sommaB=A [i][j]+media;
						B [i][j]=sommaB;
					}
				}
				
				for (i=0; i<N; i++)
				{
					for (j=0; j<M; j++)
					{
						cout<<B [i][j]<<" ";
					}
				cout<<endl;
				}
				
		return 0;
	}
