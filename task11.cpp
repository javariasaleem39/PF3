#include<iostream>
using namespace std;
main(){
cout<<"Enter the current world population: ";
int population;
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month): ";
int birth;
cin>>birth;
int threeDecades;
threeDecades=population +(birth* 30 * 12);
cout<<"The population in three decades will be: " << threeDecades<<endl;
}