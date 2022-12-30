#include <bits/stdc++.h>
using namespace std;
int OK=0, n, B[30]= {0};
void in(){
	for(int i=1;i<=n;i++) cout<<B[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n;
	while(B[i]){
		B[i]=0;
		i--;
	}
	if(i==0) OK = 1;
	else B[i] = 1;
}
main(){
	//Nhap
	cin>>n;
	while(!OK){
		//In ra cau hinh hien tai
		in();
		//Sinh cau hinh tiep theo
		sinh();
	}
}
