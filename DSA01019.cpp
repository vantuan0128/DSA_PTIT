/*
Khi chat chit vui vẻ, anh em chiến hữu thường hay gõ HAHA để thể hiện sự sảng khoái. Đôi khi cũng có thể gõ HAHAAAAA chẳng hạn cho thêm phần nhấn mạnh.
Giả sử một xâu ký tự được coi là HAHA nếu thỏa mãn các điều kiện:
	Ký tự đầu tiên phải là chữ H, ký tự cuối cùng phải là chữ A
	Không có hai chữ H nào liền nhau
Input   2

	2

	4
Output HA
	HAAA
	HAHA
*/
#include <bits/stdc++.h>
using namespace std;
int a[100000],n; //1 la H, 0 la A //Bat buoc vi thu tu xuat hien
bool check(){
	if(a[1]==0||a[n]==1) return 0;
	for(int i=1;i<=n;i++){
		if(a[i]==1&&a[i+1]==1) return 0;
	}
	return 1;
}
void XauNhiPhan(int a[], int n){
	for(int i=1;i<=n;i++){
		a[i]=0; //xau dau tien AAA //000
	}
	while(1){ 
		if(check()){
			for(int i=1;i<=n;i++){
				if(a[i]==1) cout<<"H";
				else cout<<"A";
			}	
			cout<<endl;
		}
		int i=n;
		while(i>0&&a[i]==1){
			a[i]=0;
			i--;
		}
		if(i>0) a[i]=1;
		else return;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		XauNhiPhan(a,n);
	}
	return 0;
}
