#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv="B20DCCN001";
	string name,atclass;
	char date[11];
	double gpa;
};

void nhap(SinhVien &a){
	getline(cin,a.name);
	getline(cin,a.atclass);
	fgets(a.date,11,stdin);
	cin>>a.gpa;
}

void in(SinhVien a){
	string tmp="";
	char *p=strtok(a.date,"/");
	while(p!=NULL){
		if(strlen(p)==1) tmp+="0"+(string(p))+"/";
		else tmp+=string(p)+"/";
		p=strtok(NULL,"/");
	}
	for(int i=0;i<11;i++)
		a.date[i]=tmp[i];
	a.date[10]=NULL;
	cout<<a.msv<<" "<<a.name<<" "<<a.atclass<<" "<<a.date<<" "<<fixed << setprecision(2) <<a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}