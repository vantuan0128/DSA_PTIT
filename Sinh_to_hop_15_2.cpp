#include <bits/stdc++.h>
using namespace std;
int OK=0, n, C[40], k;
void in(){
	for(int i=1;i<=k;i++) cout<<C[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=k;
	while(C[i] == n-k+i) i--;
	if(i==0) OK = 1;
	else{
		C[i]++;
		for(int j=i+1;j<=k;j++) C[j]=C[j-1]+1;
	}
}
main(){
	//Nhap
	cin>>n>>k;
	for(int i=1;i<=k;i++) C[i]=i;
	while(!OK){
		//In ra cau hinh hien tai
		in();
		//Sinh cau hinh tiep theo
		sinh();
	}
}
