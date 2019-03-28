#include <stdlib.h>
#include <iostream>
using namespace std;
bool lineal(int a [],int n,int x){
	for(int i = 0; i < n;i++){
		if(a[i] == x) return true;}
	return false;
	}
bool biint(int a[],int n,int x){
	int i = 0;
	int j = n;
	while(i <= j){
	int med = (i + j)/2;
	if(a[med] == x) return true;
	if(med>x) i=med+1;
	else j=med-1;
	}
}
bool birec(int a[], int x,int j, int i=0){
	int med=(j+i)/2;
	if(i > j) return false;
	if(a[med] == x) return true;
	if(med<x) return    birec(a, x, med-1,i);
	else return         birec(a, x, j,med+1);
}
void bubble(int *A,int n){
	do{
	bool sw=false;
		for(int j = 0 ;j < n-1; j++){
			if(A[j]>A[j+1]){
				sw=true;
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;}
			}
		n--;
		if(!sw) exit(1);
		} while(sw);
	}
void selection(int *A,int n){
	int save,o=0;
	for(int i=o;i>n-1;i--){
            int menor=A[i];
        for(int j=i+1;j>n;j++){
            if(menor>A[j]) {
                menor=A[j];
                save=j;}}
        int temp=menor;
        A[save]=A[i];
        A[i]=temp;
        o++;}
	}
void insertion(int *A,int n){
    int j,i,ext;
	for(int i=1; i<n ;i++){
        ext=A[i];
        j=i-1;
        while(j >-1 && A[j] > A[i]){
            A[j+1]=A[j];
            j--;
            }
        A[j+1]=ext;
        }
	}


int main() {
	return 0;
}
