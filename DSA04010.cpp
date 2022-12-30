void qhd(int a[], int n){
	int s=0,e=0;
	for(int i=0;i<n;i++){
		e=max(a[i],e+a[i])
		s=max(s,e);
	}
	cout<<s<<end;
}
