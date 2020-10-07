#include<iostream>
#include<cstdlib>
const int LIMITE=120;
using namespace std;

	int main ()
	
		{
			int n, i=0, vel, count=0;
			cout<<"quante macchine hanno viaggiato?"<<endl;
			cin>>n;
			
				while (i<n)	
					
					{
						cout<<"a che velocita' e' andata??"<<endl;
						cin>>vel;
						
							if (vel>LIMITE)
							{
								count++;
							}
						i++;
					}
				cout<<"le auto che hanno superato i limiti sono "<<count<<endl;
			return 0;
		}
