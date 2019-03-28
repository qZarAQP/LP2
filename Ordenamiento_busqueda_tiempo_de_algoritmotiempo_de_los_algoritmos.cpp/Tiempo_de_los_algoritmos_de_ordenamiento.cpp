#include <stdlib.h>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include <iostream>
int N=10000000;
int *TB;
int *TA;
typedef void(*fun_sort)(int *, int);
bool test_sort(fun_sort sort,const int *A, int n){
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	clock_t t = clock();
	sort(TA,n);//el sort
	float time=float(clock()-t)/CLOCKS_PER_SEC;
	std::sort(TB,TB+n);//std sort
	for(int i =0;i<n;i++)
		if(TA[i]!=TB[i]) return false;
	std::cout<<time<<" ";
	return true;
}
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
	bool sw;
	int temp;
	do{
	sw=false;
		for(int j = 0 ;j < n-1; j++){
			if(A[j]>A[j+1]){
				sw=true;
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;}
			}
		n--;
		} while(sw);
	}
void selection(int *A,int n){
	int temp;
	for(int i=0;i < n;i++){
            int menor=i;
        for(int j= i+1;j < n;j++){
            if(A[menor] > A[j])  menor = j;}
        temp = A[menor];
        A[menor] = A[i];
        A[i] = temp;}
	}
void insert(int *A,int n){
    int j,i,ext;
	for(int i=1; i<n ;i++){
        ext=A[i];
        j=i-1;
        while(j >-1 && A[j] > ext){
            A[j+1]=A[j];
            j--;
            }
        A[j+1]=ext;
        }
	}
using namespace std;
int main() {
	srand(time(NULL));
	int *A= new int[N];
	TA=new int [N];
	TB=new int [N];
	fun_sort sort[3]={bubble,insert,selection};
	for(int n=100;n<=N;n*=10){
		for(int i=0;i<n;i++)
			A[i]=rand()%n;
		cout<<n<<" ";
		for(int s=0;s<3;s++){
			if(!test_sort(sort[s],A,n)){
				cout<<"Fail\n";
				return 0;
			}}
		cout<<endl;
			}
		delete[]A;
		delete[]TA;
		delete[]TB;	
	
	return 0;
}
