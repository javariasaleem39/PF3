#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the cricket team: ";
string team;
cin>>team;
cout<<"Enter the number of wins: ";
int wins;
cin>>wins;
int winsPoints;
winsPoints=wins*3;
cout<<"Enter the number of draws: ";
int draws;
cin>>draws;
int drawsPoints;
drawsPoints=draws*1;
cout<<"Enter the number of losses: ";
int losses;
cin>>losses;
int lossesPoints;
lossesPoints=losses*0;
int points;
points=winsPoints+drawsPoints+lossesPoints;
cout<<team<< " has obtained "<<points<<" points in the Asia Cup tournament."<<endl;
}