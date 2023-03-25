#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the value of n"<<" ";
cin>>n;
bool isPrime = 1;

for(int i = 2;i<n;i++){
	if(n%i==0){ // the remainder is zer0, thats why its not a prime number
	//cout<<"Not a prime number"<<endl;
	isPrime = 0;
	break;
		
	}
	
}
if (isPrime==0){
	cout<<"Not a prime Number"<<endl;
}else{
	cout<<"is a prime Number"<<endl;
}

return 0;


}


