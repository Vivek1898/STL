#include<iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>  
#include <queue>
#include<cstdio>
#include <cstring>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
//MAAP AND UNORDERED MAP  
//MULTIMAPS CONTAINS 
//Multiple elem have SAME KEYS
//Insert find erase --->O(logn)--b/c self balancing bst
class node{
public:
  int data;
  node*left;
  node*right;

  node(int d){
    data=d;
    left=right=NULL;
  }

};
//EACH NODE
//DISTANCE-KEY--INT
//VALUE --NODE--VECTOR

void verticalorder(node*root,int d,map<int,vector<int>>&m){
  if(root==NULL){
    return;
  }
  m[d].push_back(root->data);
  verticalorder(root->left,d-1,m);
  verticalorder(root->right,d+1,m);

}
int main(){
	init_code();
  
  node*root=new node(1);
  root->left=new node(2);
  root->right=new node(3);

  root->left->left=new node(4);
  root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
  root->right->right->right=new node(9);
    root->left->right->right=new node(8);


    map<int,vector<int>>m;
    int d=0;
    verticalorder(root,d,m);
    for(auto p:m){
      cout<<p.first<<"->";
      for(int x:p.second){
        cout<<x<<",";
      }
      cout<<endl;

    }

 
 
return 0;

}

//GFG SAME QUES USING QUUEU
class solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        int d=0;
        map<int,vector<int>>m;
        vector<int>v;
        
       if(root==NULL){
           return vector<int>();
       }
       
       queue<pair<Node*,int>>q;
       q.push(make_pair(root,d));
       while(!q.empty()){
           pair<Node*,int>temp=q.front();
           q.pop();
           d=temp.second;
        Node* tempnode=temp.first;
        m[d].push_back(tempnode->data);
        
        if(tempnode->left){
            q.push(make_pair(tempnode->left,d-1));
        }
          if(tempnode->right){
            q.push(make_pair(tempnode->right,d+1));
        }
        
       }
       for (auto x:m){
        for(int i=0;i<x.second.size();i++)
                v.push_back(x.second[i]);
       }
       return v;
    }
};
