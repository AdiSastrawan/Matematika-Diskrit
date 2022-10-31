#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"bilangan a : ";
	cin>>a;
	cout<<"bilangan b : ";
	cin>>b;
	int temp=a;
	while(temp%b!=0){
		temp+=a;
	}
	cout<<"KPK : "<<temp;
}
            

	