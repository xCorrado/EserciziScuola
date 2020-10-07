#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, num, min, i=1;
			cout<<"quanti numeri vuoi inserire??"<<endl;
			cin>>n;
			cout<<"inserisci un numero"<<endl;
			cin>>num;
			min=num;
			
				while (i<n)
				{
					cout<<"inserisci un numero"<<endl;
					cin>>num;
					
						if (num<min)
						{
							min=num;
						}
					i++;
				}
				cout<<"il numero minore tra quelli che mi hai dato e' "<<min<<endl;
			return 0;
		}
