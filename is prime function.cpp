#include<iostream>
using namespace std;
// 1 - prime
//0 - not a prime
bool isPrime(int n){
	for(int i =2;i<n;i++){
		//divide ho gya h , not a prime no.
		if(n%i ==0){
			return 0;
		}
		
	}
	return 1;
}


int main(){
int n;
cin>>n;

if(isPrime(n)){
	cout<<" is a prime no."<<endl;
}else{
	cout<<"not a prime no."<<endl;
}

return 0;


}


