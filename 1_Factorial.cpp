#include<iostream>
using namespace std;
int factorial(int);
int n,result;
int main(){
	cout<<"Factorial \n\n";
	cout<<"Enter a number: ";cin>>n;
	result=factorial(n);
	cout<<"Factorial of that number is: "<<result;
	return 0;
}
int factorial(int n){
	if (n>1) {
		return n*factorial(n-1);
	} else {
		return 1;
	}
}
