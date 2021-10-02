#include<bits/stdc++.h>
using namespace std;
// datatype(return vale) function_name(parameter)
//  global function
void print_hello() {
    cout<<"Hello Gang"<<endl;
}
int sum(int a,int b) {
    return a+b;
}
int mini(int x,int y) {
    return x-y;
}
float dive(float s,float t) {
    return  s/t;
}
void pattern1(int m,int n) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(i>=j){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern2(int m,int n) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if((i+5)>=j){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void main2()
{
	int n=5;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==3)
			cout<<i+j;
			else if( i==j )
			cout<<i+j;
			else if((i+j)==(n+1))
			cout<<i+j;
			else if(j==(n/2)+1)
			cout<<i+j;
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}

// main fuction start
int main() {
    int sum1=sum(5,7);
    cout<<sum1<<"\n";
    int l=mini(7,2);
    cout<<l<<endl;
    cout<<dive(7,8);
    pattern1(5,5);
    pattern2(5,5);
    main2();
    return 0;
}
