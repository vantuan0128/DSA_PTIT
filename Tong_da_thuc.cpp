#include <bits/stdc++.h>
using namespace std;
struct node{
	int heso,mu;
	node *next;
};
void show(node *dt){
	node *p=dt;
	while(p!=NULL){
		cout<<p->heso<<"*x^"<<p->mu;
		p=p->next;
		if(p!=NULL) cout<<" + ";
		else break;
	}
	cout<<endl;
}
void add_note(int hs, int m, node *&start){
	node *temp=new node;
	temp->heso=hs;
	temp->mu=m;
	temp->next=NULL;
	if(start==NULL) start=temp;
	else{
		node *p=start;
		while(p->next!=NULL) p=p->next;
		p->next=temp;
	}
}
void tao_dathuc(char s[],node *&start){
	int h,m;
	char *p=strtok(s,"*x^+ ");
	while(p!=NULL){
		h=atoi(p); p=strtok(NULL,"*x^+ ");
		m=atoi(p); p=strtok(NULL,"*x^+ ");
		add_note(h,m,start);
	}
}
