#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, num, max, i=1;
			cout<<"quanti numeri vuoi inserire??"<<endl;
			cin>>n;
			cout<<"inserisci un numero"<<endl;
			cin>>num;
			max=num;
				
				while (i<n)
				
				{
					cout<<"inserisci un numero"<<endl;
					cin>>num;
					
					if (num>max)
					{
						max=num;
					}
					i++;
				}
				cout<<"il massimo e' "<<max<<endl;
			return 0;
		}
