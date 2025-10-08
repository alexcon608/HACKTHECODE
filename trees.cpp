///////////////////          SACHIN VARDHAN              ///////////////////
 
 
#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#endif
 
//****************************************************************************************************************//
 
#include<bits/stdc++.h>
using namespace std;
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include <cctype>
 
//****************************************************************************************************************//
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
 
 
const ll mod1 = 1e9+6;
const ll smax = 1e18;
const ll mod2 = 1e9+7;
const ll smin = 10e9-1;
 
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define haa cout<<"YES"<<endl;
#define naa cout<<"NO"<<endl;
#define ha cout<<"Yes"<<endl;
#define na cout<<"No"<<endl;
#define pb push_back
#define fi first
#define double long double
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define lli long long int
 
 
//****************************************************************************************************************//
void ghost(){

}
 
//****************************************************************************************************************//
 
template<typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this -> data = data;
    }

    // destructor
    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }
};

TreeNode<int>* takeinputlevelwise(){
    int rootdata;
    cout<<"Enter rootdata"<<endl;
    cin>>rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingnodes;

    pendingnodes.push(root);
    while (pendingnodes.size()!=0){
        /* code */
        TreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();

        cout<<"Enter no of children "<<front->data;
        int numchild;
        cin>>numchild;

        for(int i=0;i<numchild;i++){
            int childdata;
            cout<<"enter "<<i<<"th child"<<front->data<<endl;
            cin>>childdata;


            TreeNode<int> *child = new TreeNode<int>(childdata);

            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}


TreeNode<int>* takeinput(){
    int rootdata;
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    cout<<"enter no of children";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>*child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

/*int nofnodes(TreeNode<int>* root){
    int ans;
    for(int i=0;i<root->children.size();i++){
        int n=nofnodes(root->children[i]);
        ans = max(ans,n)
    }
}*/


void printatlevel(TreeNode<int>*root,int k){
    if(k == 0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printatlevel(root->children[i],k-1);
    }
}

void getheight(TreeNode<int>* root,int height,int *max){
    if(*max<height){
        *max = height;
    }
    for(int i=0;i<root->children.size();i++){
        getheight(root,height,max);
    }

}



int getheight(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int h = 1,m=1;
    getheight(root,h,&m);
}

void PrintTree(TreeNode<int>* root){
    if(root == NULL){
        return;
    }//Edge CASE

    cout<<root->data<<":"<<endl;
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        PrintTree(root->children[i]);
    }
}

int main(){
    /*vector<int> v;
    //vector<int> *vp = new vector<int>();
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1] = 100;
    cout<<v[0]<<v[1]<<v[2];
    return 0;*/
    /*TreeNode<int> * root = new TreeNode<int>(1);
    TreeNode<int> * node1 = new TreeNode<int>(2);
    TreeNode<int> * node2 = new TreeNode<int>(3);
    root -> children.push_back(node1);
    root->children.push_back(node2);*/
    TreeNode<int> * root = takeinputlevelwise();
    PrintTree(root);

 
}