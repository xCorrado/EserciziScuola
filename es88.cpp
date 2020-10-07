#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			char cr [5], let, let1;
			int i, num=0;
				
				for (i=0; i<5; i++)
				{
					cout<<"inserisci un carattere"<<endl;
					cin>>let;
					cr [i]=let;
				}
				
					cout<<"dammi il carattere"<<endl;
					cin>>let1;
					
					for (i=0; i<5; i++)
					
					if (let1==cr[i])
					{
						num=num+1;
					}
					cout<<"la lettera e' uscita"<<num<<endl;
			return 0;
		}
