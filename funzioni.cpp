#include<iostream>
#include<cstdlib>
using namespace std;
void somma ();

	int main (){
		
		cout<<"ciao"<<endl;
		
		somma ();
		
		cout<<"fine programma"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	void somma () {
		
		int x, y, somma=0;
		cout<<"inserisci x"<<endl;
		cin>>x;
		cout<<"inserisci y"<<endl;
		cin>>y;
		somma=x+y;
		cout<<"la somma e' "<<somma<<endl;
	}
