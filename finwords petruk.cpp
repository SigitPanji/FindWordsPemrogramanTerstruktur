#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int p_kata,cek,kata_ada,jumlah;
	kata_ada=0;
	char input[100];
	char findword[15][15]  = {{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
							 {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
							 {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
							 {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
							 {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
							 {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
							 {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
							 {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
							 {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
							 {'o','n','o','p','k','w','w','p','a','r','k','t','z','c','c'},
							 {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
							 {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
							 {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
							 {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
							 {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}};
					cout<<endl<<endl;
					
		for(int i=0;i<=14;i++){
			for(int j=0;j<=14;j++){
				cout<<"|"<<findword[i][j];
			}cout<<endl;
		}
				cout<<endl<<"Masukkan jumlah kata yang ingin dicari : ";cin>>jumlah;
				
				for(int a=1;a<=jumlah;a++){
					cout<<"what word will you find? : "; cin>>input;
					p_kata = strlen(input);
					cout<<endl;
					
					for(int i=0;i<15;i++){          //baris
						for(int j=0;j<15;j++){      //kolom
							if (input[0]== findword[i][j]){
								
								//  kanan
								for(int p=0;p<=p_kata;p++){
								
								if(input[p] == findword[i][j+p]){
									cek=p;
								}else{break;
								}
							}if(cek==p_kata-1){kata_ada =1;
							}else{kata_ada =0;
							}cek = 0;
							
							//kiri
							
							
								for(int p=0;p<=p_kata;p++){
										if(input[p] == findword[b][k-p]){
											cek =p;
										}else{
											break;
										}
									}
									if(cek == p_kata-1){
										ada +=1;
									}else{
										ada +=0;
									} cek = 0;
									
									// bawah 
									for(int p=0;p<=p_kata;p++){
										if(input[p] == word[b+p][k]){
											cek =p;
										}else{
											break;
										}
									}
									if(cek == p_kata-1){
										ada+=1;
									}else{
										ada+=0;
									}
									cek = 0;
						}
					}
				}
			}
							
							
							
						
					
				 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
	
	
}
