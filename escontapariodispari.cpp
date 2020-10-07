#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int n, i=0, num, countpari=0, countdispari=0;
			cout<<"quanti numeri vuoi inserire??"<<endl;
			cin>>n;
			
			while (i<n)
			
				{
					cout<<"inserisci un numero"<<endl;
					cin>>num;
					
						if (num%2==0)
						{
							countpari=countpari+1;
						}
						if (num%2!=0)
						{
							countdispari=countdispari+1;
						}
					i++;
				}
				cout<<"i numeri pari sono "<<countpari<<endl;
				cout<<"i numeri dispari sono"<<countdispari<<endl;
			return 0;
		}
