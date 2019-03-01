#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){	
	srand(time(0));
	randomAlphabet();
	showAlphabet();
	return 0;
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomAlphabet(){
	char ne;
	int num;
	char word[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i <8;i++)
		for(int j = 0;j<8;j++){
			alphabet[i][j]=word[rand()%25];
		}
}

//Write definition of function randomAlphabet() here.

