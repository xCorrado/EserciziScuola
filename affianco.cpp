#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int vet [5], i, num;
			
				for (i=0; i<5; i++)
				{
					cout<<"inserisci i numeri"<<endl;
					cin>>num;
					vet [i]= num;
				}
				
				cout<<endl;
				
				for (i=0; i<5; i++)
				{
					cout<<" "<<vet [i];
				}
			return 0;
		}
