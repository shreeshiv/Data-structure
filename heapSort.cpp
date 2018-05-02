#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
int large=i;
int l=2*i+1;
int r=2*i+2;
if(l<n&&arr[l]>arr[large]){
large=l;
}
if(r<n&&arr[r]>arr[large]){

large=r;
}if(i!=large){
int tt=arr[i];
arr[i]=arr[large];
arr[large]=tt;
heapify(arr,n,large);
}

}


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];

cout<<"After sorting";
for(int i=n/2-1;i>=0;i--)heapify(arr,n,i);
for(int i=n-1;i>=0;i--){
int temp=arr[i];
arr[i]=arr[0];
arr[0]=temp;
heapify(arr,i,0);
}

for(int i=0;i<n;i++)cout<<arr[i];
return 0;
}
