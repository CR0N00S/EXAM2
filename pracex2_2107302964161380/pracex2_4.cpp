#include <iostream>
#include <cmath>

using namespace std;
double av(double,double);
int y,o;

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
    return 0;
}
double av(double x,double y){
    double a,b,max=0,min,c,d,f,g;
    
        if(x>y){
        max=x;
        min=y;
        }   
            else{if(y>x){
            max=y;
            min=y;
        }
    }
    a=max/min;
    if(x<=0||y<=0){
        return 0;
    }
    else {if(a<=100)
            b=sqrt(x*y);     
            return b;   
    }
    c=x+y;
    f=av(x,c/2)+av(y,c/2); 
    return f;
}


//Write function definition of av() here.