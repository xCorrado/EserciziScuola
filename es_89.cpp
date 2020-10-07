#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int i;
			char car, car1, v1 [3], v2 [7];
			
				for (i=0; i<3; i++)
				{
					cout<<"inserisci la lettera nel primo vettore"<<endl;
					cin>>car;
					v1 [i]= car;
				} 
				
				for (i=0; i<7; i++)
				{
					cout<<"inserisci sempre la lettera nel secondo vettore"<<endl;
					cin>>car1;
					v2 [i]= car1;
				}
				
				for (i=0; i<7; i++)
				{
					if (v2 [i]==v1 [0]||v2 [i]==v1 [1]||v2 [i]==v1[2])
					{
						v2 [i]='*';
					}
				}
				cout<<endl;
				for (i=0; i<7; i++)
				{
					cout<<v2 [i]<<" " ;
				}
				
			return 0;
			
		}
