//referensi : http://journal.uii.ac.id/Snati/article/viewFile/1604/1379

#include <iostream>
#include <cstring>
#include "findwords.cpp"

using namespace std;

int main(){
cout<<endl;
	for(int line=0;line<=14;line++){
	for (int col=0;col<=14;col++){
	cout<<" "<<wordlist[line][col];
	}
	cout<<endl;
	}
	cout<<endl;
	cout<<"\t";cin>>n_input;
	
	findwords(n_input);
}
