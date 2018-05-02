//Quick S0rt
#include<bits/stdc++.h>
using namespace std;
int n;
void swap(int* a,int* b){
int c=*a;
*a=*b;
*b=c;
}
int parti(int arr[],int l,int r){
int i=l-1;
int pivot=arr[r];
for(int j=l;j<r;j++){

if(arr[j]<=pivot){
i++;
int tt=arr[i];
arr[i]=arr[j];
arr[j]=tt;

}
}
i++;
int ttt=arr[i];
arr[i]=arr[r];
arr[r]=ttt;

return i;

}

void quickSort(int arr[],int l,int r){
if(l<r){

int pi=parti(arr,l,r);
quickSort(arr,l,pi-1);
quickSort(arr,pi+1,r);
}


}
int main(){
cout<<"Enter total number of input"<<endl;
cin>>n;
int arr[n];
cout<<n;
cout<<"Enter the array:"<<endl;
for(int i=0;i<n;i++){cin>>arr[i];
}
quickSort(arr,0,n-1);

cout<<endl;
cout<<"Final array is :"<<endl;
for(int i=0;i<n;i++)cout<<arr[i]<<" ";


return 0;}
