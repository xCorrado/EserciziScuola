#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, i=0, num, countpari=0;
			cout<<"quanti numeri vuoi inserire"<<endl;
			cin>>n;
			
				while (i<n)
				{
					cout<<"inserisci un numero"<<endl;
					cin>>num;
					i++;
					
					if (num%2==0)
					{
						countpari=countpari+num;
					}
				}
			cout<<"la somma e' "<<countpari<<endl;
			
			return 0;
				
				
		}
