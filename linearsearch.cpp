#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
	
}

int main(){
int arr[10]={1,8,-4,6,9,12,3,-2,11,21};
cout<<"Enter the element you have to search"<<endl;
//whether 1 is present in it or not ?
int key;
cin>>key;

bool found= search(arr,10,key);

if(found){
	cout<<"key is present"<<endl;
}else{
	cout<<"key not found"<<endl;
}

return 0;


}


