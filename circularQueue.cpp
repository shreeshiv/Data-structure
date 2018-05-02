#include<bits/stdc++.h>
using namespace std;
int front,rear;
int n;
void push(int arr[]){
int tt;
cout<<"enter the input";
cin>>tt;
if(front==-1&&rear==n-1){
cout<<n-1<<front<<rear<<endl;
cout<<"overflowed";
}
if(front-rear==1){

cout<<"overflow";
}
else{
if(rear>front){
arr[rear+1]=tt;
rear++;
}

else{
arr[rear+1]==tt;
rear++;
}

}


}
void pop(int arr[]){

if((rear==-1&&front==-1)||(rear==front)){
cout<<"underflow";}
else{
if(front==n-1){
cout<<arr[front];
front=0;
}
else{
cout<<arr[front];
front++;
}

}


}

void prin(int arr[]){
if(rear>=front){
for(int i=front+1;i<=rear;i++){
cout<<arr[i]<<" ";
}
}
else{
for(int i=front;i<n;i++){
cout<<arr[i]<<" ";
}
for(int i=0;i<=rear;i++){
cout<<arr[i]<<" ";

}
}
}
int main(){

cout<<"enter the value of n"<<endl;
cin>>n;
int arr[n];

front=-1;
rear=-1;
int temp;
while(temp!=3){
cin>>temp;

if(temp==1){
//push
push(arr);
}
else if (temp==2){
//pop
pop(arr);

}
else if (temp==3){
break;}
else {cout<<"enter valid input";}
cout<<"front :"<<front<<" rear:"<<rear<<" ";
prin(arr);
}



return 0;
}
