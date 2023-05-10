/*
Cho một dãy các xâu ký tự chỉ bao gồm các chữ cái in hoa từ A đến Z, trong đó các ký tự trong mỗi xâu đều đã được sắp xếp theo thứ tự từ điển 
và mỗi chữ cái chỉ xuất hiện nhiều nhất một lần (tức là độ dài xâu tối đa là 26). Nếu một ký tự xuất hiện trong hai xâu liên tiếp thì được coi là một lần lặp. 
Hãy tìm cách sắp xếp lại thứ tự các xâu sao cho số lần lặp là nhỏ nhất có thể. Ví dụ dưới đây là cùng một dãy xâu nhưng với cách sắp xếp lại thì số lần lặp chỉ còn 2.
ABC
ABEF
DEF
ABCDE
FGH
=> Số lần lặp là 6
ABEF
DEF
ABC
FGH
ABCDE
=> Số lần lặp là 2.
Input & Output:
4
XYZ
XYZ
ABYZ
Z
--> 4
6
BDE
FGH
DEF
ABC
BDE
ABEF
--> 3
5
ABC
ABEF
DEF
ABCDE
FGH
--> 2
*/
#include <bits/stdc++.h>
using namespace std;
int c[20][20], n, x[20], fopt = 1e9, xopt[20], cmin=1e9, cost=0;
bool chuaxet[20];
void Try(int i){
	int j;
	for(j=1;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j; chuaxet[j]=false;
			cost+=c[x[i-1]][x[i]];
			if(i==n){
				fopt=min(fopt,cost);
			}
			else if(cost+cmin*(n-i+1) < fopt){
				Try(i+1);
			}
			cost-=c[x[i-1]][x[i]];
			chuaxet[j]=true;
		}
	}
}
int dem(string s1, string s2){
	int i=0,j=0,d=0;
	while(i<s1.size()&&j<s2.size()){
		if(s1[i]==s2[j]){ 
			i++;j++;d++;
		}
		else if(s1[i]<s2[j]) i++;
		else j++;
	}
	return d;
}
main(){
	int i,j;
	cin>>n;
	vector<string> vs;
	for(i=0;i<n;i++){
		string tmp; cin>>tmp;
		vs.push_back(tmp);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j) c[i][j]=1e9;
			else c[i][j]=dem(vs[i-1],vs[j-1]);
			cmin=min(cmin,c[i][j]);
		}
	}
	for(i=1;i<=n;i++){ x[i]=i; chuaxet[i]=true;	}
	Try(1);
	cout<<fopt<<endl;
}
