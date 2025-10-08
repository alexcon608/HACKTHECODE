#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int l,v1,v2;
        cin>>l>>v1>>v2;
        double t1 = l/v1;
        float t2 = l/v2;
        int s1 = t1;
        int s2 = t2;
        cout<<t1;
        if(t1 > s1){
            s1+=1;
        }
        if(t2 > s2){
            s2+=1;
        }

        if(s1 > s2){
            cout<<(s1-s2)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}


