#include<iostream>
#include<cstdlib>
using namespace std;

	int main ()
	
		{
			int num1, num2, diff;
			cout<<"inserisci i 2 numeri"<<endl;
			cin>>num1;
			cin>>num2;			
				if (num2>num1)
				
					{
						diff=num2-num1;
						cout<<"la diff e' "<<diff<<endl;
					}
					
				if (num1>num2)
				
					{
						diff=num1-num2;
						cout<<"la diff e' "<<diff<<endl;
					}
			return 0;
		}
