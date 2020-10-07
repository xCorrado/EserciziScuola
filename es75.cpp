#include<iostream>
#include<cstdlib>
const int NUM_STUDENTI=6;
using namespace std;

	int main ()
	
		{
			char sesso;
			int eta, i, countetam=0, countetaf=0, mediam, mediaf, countm=0, countf=0;
			
				while (i<NUM_STUDENTI)
			
					{
						cout<<"inserisci il sesso"<<endl;
						cin>>sesso;
						cout<<"inserisci l'eta'"<<endl;
						cin>>eta;
							
							if (sesso=='m')
								
								{
									countm++;
									countetam=countetam+eta;
								}
								
							if (sesso=='f')
								
								{
									countf++;
									countetaf=countetaf+eta;
								}
					i++;		
					}
				
				mediam=countetam/countm;
				mediaf=countetaf/countf;
				
				cout<<"l'eta' media degli studenti maschi e' "<<mediam<<endl;
				cout<<"l'eta' media delle studentesse femmine e' "<<mediaf<<endl;
			
			return 0;
		}
