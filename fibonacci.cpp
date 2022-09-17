#include<iostream>
#include<string>
using namespace std;

#define N 200

long fib[N];

void display(){
	for(int i =0;i<10;i++){
		cout<<fib[i]<<",";
		cout<<endl;
	}
}
void intialisation(){
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<N;i++){
		fib[i]=-1;
	}

}

long fibanocci(int n){
	
	if(fib[n]==-1){
		fib[n] = fibanocci(n-1)+fibanocci(n-2);
	}
	return fib[n];
}

int main(int argc,char **argv){
	for(int i=0;i<argc;i++){
		cout<<"i:"<<i<<","<<argv[i]<<endl;
	}
	int n = stoi(argv[1]);
	intialisation();
	if(n<1){
		cout<<"Inavlid Input";
	}else{
		cout<<"The "<<n<<"th fibanocci number is :"<<fibanocci(n)<<"\n";	
	}
	
}