// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
    int k=s.size();
    if(k==n)
    return true;
    else
    return false;
}

bool isEmpty(stack<int>& s){
	if(s.size()==0)
	return true;
	else 
	return false;
}

int pop(stack<int>& s){
    int l=s.top();
	s.pop();
	return l;
}


int getMin(stack<int>& s){
    int minimum=s.top();
	while(!s.empty()){
	    minimum=min(minimum,s.top());
	    s.pop();
	}
	return minimum;
}