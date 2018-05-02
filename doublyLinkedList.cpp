#include<bits/stdc++.h>
using namespace std;
struct node{
int val;
struct node* left;
struct node* right;
};
void insert(struct node* head){
int t;
cout<<"Enter the value of number\n";
cin>>t;
struct node* newNode=(struct node*)malloc(sizeof(struct node));
struct node* cur=(struct node*)malloc(sizeof(struct node));
newNode->left=NULL;
newNode->right=NULL;
newNode->val=t;
if(head->right==NULL){
head->right=newNode;
}
else{
cur=head->right;
while(cur!=NULL){
if(cur->right==NULL){
cur->right=newNode;
newNode->left=cur;
break;
}

cur=cur->right;
}


}


}
void prin(struct node* head){
head=head->right;
while(head!=NULL){
cout<<head->val<<" ";
head=head->right;
}

}
int main(){
struct node* head=(struct node*)malloc(sizeof(struct node));
head->right=NULL;
head->left=NULL;
int tt;
cout<<"Enter 1 for insert 2 for delete and 3 for exit\n";
while(tt!=3){
cin>>tt;
if(tt==1){
insert(head);
prin(head);

}
else if (tt==3){
break;
}else{
cout<<"Enter the valid input";
}
}
return 0;

}
