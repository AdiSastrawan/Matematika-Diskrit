#include<iostream>
using namespace std;

int Count( bool isThere[],int ha[],int hb[],int b,int a){
	int c=0;
	for(int i=0;i<b;i++){
		for(int j=0;j<a;j++){
			if(ha[j]==hb[i]&&isThere[i]!=true){
				isThere[i]=true;
				c++;
			}
		}
	}
	return c;
}
int CountIsThere(int queue[],bool isThere[],int hb[],int b){
	int k=0;
	for(int i=0;i<b;i++){
		if(isThere[i]==false){
			queue[k]=hb[i];
			k++;
		}	
	}
	return k;
}
int main(){
	int a,b;
	cout<<"Input the Set size of A : ";
	cin>>a;
	cout<<"Input the Set size of B : ";
	cin>>b;
	bool isThere[b];
	int ha[a];
	int hb[b];
	int count=0;
	
	cout<<"Input the value of A Set: ";
	for(int i=0;i<a;i++){
		cin>>ha[i];
	}
	cout<<"Input the value of A Set: ";
	for(int i=0;i<b;i++){
		cin>>hb[i];
		isThere[i]=false;
	}
	int rSize=b-Count(isThere,ha,hb,b,a);
	int queue[rSize];
	cout<<"Result : ";
	if(CountIsThere( queue,isThere,hb,b)<=0){
		cout<<"Empty Set";
	}else {
		for(int i=0;i<rSize;i++){
			cout<<queue[i]<<" ";
		}
	}
	cout<<endl;

}