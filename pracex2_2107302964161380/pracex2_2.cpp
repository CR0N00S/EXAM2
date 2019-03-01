#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
void sort(float x[], int N){
	for(int i = 0; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	int i;
	float max=0,store,x;
	float A[20];
	string line;
	ifstream score("score1.txt");
	ofstream write("rank.txt");
	while (getline(score,line)){
		x=atof(line.c_str());
		A[i]=x;
		i++;
		}
	
	for( i = 0; i < 19; i++){
		write<<A[i]<<"\n";
	}
	
	
return 0;
}

