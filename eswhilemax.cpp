#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int num, i=1, max;
				
			cout<<"inserisci il numero"<<endl;
			cin>>num;
			max=num;
			
				while (i<5)
				{
					cout<<"inserisci il numero"<<endl;
					cin>>num;
					i++;
					
					if (num>max)
					{
						max=num;
					}
				}
				cout<<"il massimo e' "<<max<<endl;
			return 0;
		}
