#include<iostream>
using namespace std;
int ok=0,n,a[25];

void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sinh(){
    int i=n;
    while(i>=1&&a[i]){
        a[i]=0;
        i--;
    }
    if(i==0) ok=1;
    else a[i]=1;
}
int checkk(){
    int l=1,r=n;
    while(l<r){
        if(a[l]!=a[r]) return 0;
        l++,r--;
    }
    return 1;
}
main(){
    cin>>n;
    while(!ok){
  	  if(checkk()==1){
   	    	in();
		}
	sinh();	
    }
}
