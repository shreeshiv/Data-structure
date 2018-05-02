//BST

#include<bits/stdc++.h>
using namespace std;
int bst(int arr[],int key,int a,int b){
if(a==b &&arr[a]!=key){
return -1;}
if(key<arr[a]||key>arr[b])return -1;
int mid=(a+b)/2;
if(arr[mid]==key){
return mid;}
else if (arr[mid]>key){
return bst(arr,key,a,mid);}
else{
return bst(arr,key,mid,b);
}

}
int main(){
int n;
cout<<"ENter total number of element in array\n";
cin>>n;
int arr[n];
cout<<"Enter the elements in array\n";
for(int i=0;i<n;i++)cin>>arr[i];
int key;
cin>>key;
int flag=-1;
flag=bst(arr,key,0,n-1);

if(flag==-1)cout<<"there is no such element in the array\n";
else cout<<"Index of key is :"<<flag;
return 0;}
