/*
Tại Chương Mỹ Resort, vào nửa đêm, cả trung đội nhận lệnh tập trung ở sân. Mỗi chiến sỹ được đánh số từ 1 đến N (1<N<40). 
Giám thị yêu cầu chọn ra một dãy K chiến sỹ để tập đội ngũ và cứ lần lượt duyệt hết tất cả các khả năng chọn K người như vậy từ nhỏ đến lớn (theo số thứ tự). 
Bài toán đặt ra là cho một nhóm K chiến sỹ hiện đang phải tập đội ngũ, hãy tính xem 
trong lượt chọn K người tiếp theo thì mấy người trong nhóm cũ sẽ được tạm nghỉ. Nếu đã là nhóm cuối cùng thì tất cả đều sẽ được nghỉ.
Input:
3
5 3
1 3 5
5 3
1 4 5
6 4
3 4 5 6
Output:
1
2
4
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000];
void sinh(){
	int i=k;
	while(i>=1&&a[i]>=n-k+i){
		i--;
	}
	if(i==0) return;
	else{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		set <int> s;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		sinh();
		for(int i=1;i<=k;i++){
			s.insert(a[i]);
		}
		if(s.size()-k==0) cout<<k<<endl;
		else cout<<s.size()-k<<endl;
	}
	return 0;
}
