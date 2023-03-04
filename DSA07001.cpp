/*
Cho một ngăn xếp các số nguyên. Các thao tác gồm 3 lệnh: push, pop và show. 
Trong đó thao tác push kèm theo một giá trị cần thêm (không quá 1000). Hãy viết chương trình ghi ra kết quả của các lệnh show.
Input:
push 3
push 5
show
push 7
show
pop
pop
show
Output:
3 5
3 5 7
3
*/

#include<bits/stdc++.h>
using namespace std;
vector <int>v;
int main(){
	while(true){
		string s;
		cin>>s;
		if(s=="push"){
			int x;
			cin>>x;
			v.push_back(x);
		}
		else if(s=="pop"){
			v.pop_back();
		}
		else if(v.size()==0){
			cout<<"empty";
			break;
		}
		else{
			for(auto it:v){
				cout<<it<<" ";
			}
			cout<<endl;
		}
	}
	return 0; 
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    stack<int> st;
    int n;
    while(cin>>s) {
        if(s == "push") {
            cin >> n;
            st.push(n);
        }
        else if(s == "pop") {
            if(!st.empty()) {
                st.pop();
            }
        }
        else if(s == "show") {
            if(st.empty()) {
                cout << "empty" <<endl;
            }
            else {
                vector<int> v;
                while(!st.empty()) {
                    int ans = st.top();
                    v.push_back(ans);
                    st.pop();
                }
                int h = v.size();
                for(int i = h-1; i >= 0; i--) {
                    cout << v[i] << " ";
                    st.push(v[i]);
                }
                cout << endl;
            }
        }
    }
    return 0;
}
