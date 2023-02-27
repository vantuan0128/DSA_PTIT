/*
Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị tuyệt đối của |X - A[i] |. 
Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp xếp theo nguyên tắc kể trên: A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-2|=5.
Input:
2
5 7
10 5 3 9 2
5 6
1 2 3 4 5
Output:
5 9 10 3 2
5 4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
int x;
int cmp(int a,int b){
	return abs(a-x)<abs(b-x);
}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n>>x;
		int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
}
