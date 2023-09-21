#include<iostream>
using namespace std;
main(){
	cout<<"Enter the size in megabytes (MB): ";
	float mb;
	cin>>mb;
	float bit;
	bit=mb*1024*1024*8;
	cout<<mb<<" MB is equivalent to "<< bit<< " bits.";
}