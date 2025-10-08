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
 
template<typename T>
 
//****************************************************************************************************************//

class binarytree{
    public:
    T data;
    binarytree * left;
    binarytree * right;

    binarytree(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~binarytree(){
        delete left;
        delete right;
    }
};

binarytree<int> * takeinputlevelwise(){
    int rootdata;
    cout<<"Enter root data : ";
    cin>>rootdata;

    if(rootdata == -1){
        return NULL;
    }

    binarytree<int> * root = new binarytree<int>(rootdata);
    queue<binarytree<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size()!=0)
    {
        binarytree<int> * front = pendingnodes.front();
        pendingnodes.pop();

        // left child data
        cout<<"Enter left child of "<<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata != -1){
            binarytree<int> * child = new binarytree<int>(leftchilddata);
            front->left = child;
            pendingnodes.push(child);
        }

        // righr child data

        cout<<"Enter right child of "<<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if(leftchilddata != -1){
            binarytree<int> * child = new binarytree<int>(rightchilddata);
            front->right = child;
            pendingnodes.push(child);
        }
    }
    return root;
    
}

binarytree<int> * takeinput(){
    int rootdata;
    cout<<"Enter root data";
    cin>>rootdata;
    if(rootdata == -1){
        return NULL;
    }
    binarytree<int> * root = new binarytree<int>(rootdata);
    binarytree<int> * leftchild = takeinput();
    binarytree<int> * rightchild = takeinput();
    root->left = leftchild;
    root->right = rightchild;
}

int numnodes(binarytree<int> * root){
    if(root == NULL){
        return 0;
    }

    return 1 + numnodes(root->left) + numnodes(root->right);
}

void printtree(binarytree<int> * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L : "<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R : "<<root->right->data;
    }
    cout<<endl;
    printtree(root->left);
    printtree(root->right);
}


int maximum(binarytree<int>*root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(root->data,max(maximum(root->right),maximum(root->left)));
}


int minimum(binarytree<int>*root){
    if(root == NULL){
        return INT_MAX;
    }
    return min(root->data,min(minimum(root->right),minimum(root->left)));
}

// Binary Search Tree

bool isbst(binarytree<int> * root){
    if(root == NULL){
        return true;
    }
    int leftmax = maximum(root->left);
    int rightmin = minimum(root->right);

    bool output = (root->data > leftmax) && (root->data <= rightmin) && isbst(root->left) && isbst(root->right);
    return output;
}

void inorder(binarytree<int> * root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

class isBST{
    public:
    bool isbst;
    int minimum;
    int maximum;
};

isBST isbst2(binarytree<int> * root){
    if(root == NULL){
        isBST output;
    }

}
 
 
int main(){
    binarytree<int> * root = takeinputlevelwise();
    //inorder(root);
    //cout<<numnodes(root);
    cout<<isbst(root);
    return 0;
 
}