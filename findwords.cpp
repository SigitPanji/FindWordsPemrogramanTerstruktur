using namespace std;

int word;
int checkpoint;
int foundword;
int n_input;
char word_input[100];
char wordlist[15][15]=	{
						{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
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
						{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}
						};
						
int findwords(int n_input){
	foundword=0;
	for(int x=0;x<=n_input-1;x++){
		cout<<"\t";cin>>word_input;
		word=strlen(word_input);
		
		
	for(int line=0;line<15;line++){
		for(int col=0;col<15;col++){
		if(word_input[0]==wordlist[line][col]){
	
	for (int p=0;p<=word;p++){
		if(word_input[p]==wordlist[line][col+p]){
		checkpoint=p;
		}else{
		break;
		}
		}
		if(checkpoint==word-1){
		foundword +=1;
		}else{
		foundword +=0;
		}
		checkpoint=0;

	
	
	for (int p=0;p<=word;p++){
				if(word_input[p]==wordlist[line][col-p]){
				checkpoint=p;
			}else{
				break;
			}
		}
		if(checkpoint==word-1){
		foundword +=1;
			}else{
				foundword +=0;
		}
		checkpoint=0;

	for (int p=0;p<=word;p++){
				if(word_input[p]==wordlist[line+p][col]){
				checkpoint=p;
			}else{
				break;
			}
			}
				if(checkpoint==word-1){
				foundword +=1;
			}else{
				foundword +=0;
		}
		checkpoint=0;

	for (int p=0;p<=word;p++){
				if(word_input[p]==wordlist[line-p][col-p]){
				checkpoint=p;
			}else{
				break;
			}
			}
				if(checkpoint==word-1){
				foundword ++;
			}else{
				foundword +=0;
		}
		checkpoint=0;

	for (int p=0;p<=word;p++){
				if(word_input[p]==wordlist[line-p][col+p]){
				checkpoint=p;
			}else{
				break;
			}
			}
				if(checkpoint==word-1){
				foundword +=1;
			}else{
				foundword +=0;
		}
		checkpoint=0;
	
	
		}
	}
}	
	if(foundword>0){
	cout<<"\tada\n";
	foundword -=1;
	}else{
	cout<<"\ttidak\n";
		}
	}
}
