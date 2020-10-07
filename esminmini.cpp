#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int i, n, min, num;
			
			cout<<"quanti numeri vuoi far stampare?"<<endl;
			cin>>n;
			
			cout<<"inserisci"<<endl;
			cin>>num;
			min=num;
				for (i=1; i<n; i++)
				{
					cout<<"inserisci"<<endl;
					cin>>num;
					
					if (num<min)
					{
						min=num;
					}
				}
			cout<<"il numero minore e' "<<min<<endl;
			return 0;
		}
