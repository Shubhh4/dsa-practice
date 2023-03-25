#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i;

for(int i =0;i<n;i++){
	if(i%n==0){
		cout<<"Non prime"<<endl;
		break;
	}
}
if(i==n){

cout<<"Prime number"<<endl;
}

return 0;


}


