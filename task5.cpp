#include<iostream>
using namespace std;
main(){
	cout<<"Enter the student's name: ";
	string name;
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	float matric;
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	float inter;
	cin>>inter;
	cout<<"Enter Ecat marks (out of 400): ";
	float Ecat;
	cin>>Ecat;
	float agg;
  	agg=(Ecat/400.0 * 0.5) + (matric/1100.0 * 0.1) + (inter/550.0 * 0.4);
	float findAggregate;
	findAggregate=agg * 100;
	cout<<"Aggregate score for "<< name<< " in UET is: "<< findAggregate << "%"<< endl;
}
	