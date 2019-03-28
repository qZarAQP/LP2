#include<iostream>
#include<string.h>
using namespace std;
	void prob1(int &a,int &b){
		a=b+a;
		b=a-b;
		a=a-b;}
	int probl2(int posc,int lista[10]){
		int menor=lista[0];
		for(int i = 0 ;i < 10;i++){
			if(menor>lista[i]) menor=lista[i];}
		while(posc>0){
		 for(int i = 0;i < 10; i++){
		 	if(menor==lista[i]){
		 		posc--;}
		 }
		 menor++;
		}
		return menor-1;
		}
	bool probl3(const char* a){
		int j = 0, i = 0;
		while(a[j])j++;j--;
		while(i<j){
			if(a[i++]!=a[j--])
				return false;
		}
	return true;
}
	int probl4(int a, int pot){
		if(pot == 2)return a * a;
		else if(pot%2 != 0) return a * probl4(a,pot-1);
		else if(pot%2 == 0 ) return probl4(a * a,pot/2);
		}
	int probl5(int base, int pot){
    int tot=1;
    while(pot!=1){
        if(pot%2!=0){
            tot=tot*base;
            pot--;}
        else{
        base=base*base;
        pot=pot/2;}
    }
    return tot*base;
}

int main(){
	int a=5,b=6;
	int lista[]={1,1,5,4,4,2,1,4,8,4};
	cout<<probl4(2,3)<<endl;
	cout<<probl5(2,3)<<endl;
	prob1(a,b);
	cout<<a<<" ,"<<b<<endl;
	cout<<probl3("holloh")<<endl;
	cout<<probl2(9,lista)<<endl;
		return 0;}
