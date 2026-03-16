#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],r,m,s=0,n=0,c[20],ptr=0;
	cout<<"enter first array size\n";
	 cin>>r;
	 	cout<<"enter second array size\n";
	 	cin>>m;
	cout<<"enter the array eliment\n";
	for(int i =0; i<r;i++){
		cin>>a[i];
	}
	cout<<"now next array read\n";
	for(int i =0; i<m;i++){
		cin>>a[i];
	} 	 	
	while(s<r && n<m){
		if(a[s]<b[n]){
			c[ptr]=a[s];
			ptr++;
			s++;
		}
		else{
			c[ptr]=b[n];
			ptr++;
			n++;
		}
		
	}
	if(n==m){
		for(int i =s;i<r;i++){
			c[ptr]==a[s];
			ptr++;
			s++;
		}
	}
		else{
			c[ptr]==b[n];
			ptr++;
			n++;
		}
		
	cout<<"now the merge array\n";
	for(int i= 0;i<= ptr;i++){
		cout<<c[i]<<endl;
	}
}
