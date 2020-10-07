#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int i=0, num, prod=1;
				
				while (i<5)
				{
					cout<<"inserisci il numero"<<endl;
					cin>>num;
					prod=prod*num;
					i++;
				}
			cout<<"il prodotto tra i 5 numeri e' "<<prod<<endl;
			return 0;
		}
