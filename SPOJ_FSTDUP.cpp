#include <iostream>
#include <map>
using namespace std;

int main(){
	int t; cin >> t;
	for(int k = 1; k <= t; k++){
		int n;
		cin >> n;
		int arr[n];
		map <int,int> mp;
		int ok = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]]++;
			if(mp[arr[i]] == 2 && ok == 0){
				cout << "#" << k << " " << arr[i] << endl;
				ok = 1;			
			}
		}
		if(ok == 0) cout << "#" << k << " -1" << endl;
	}
}
