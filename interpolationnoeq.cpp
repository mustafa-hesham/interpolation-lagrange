//This code is written by Mustafa Hesham Mohamed.
//My student code at FSSR is 201800378.
#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	string repeat;
	string newproblem;
	newproblem:
	int n = 0;
	cout<<"Please enter number of points: "<<endl;
	cin>>n;
	double x =0;
	double denom = 1;
	double nom = 1;
	double xs[n];
	double ys[n];
	double denomresult [n];
	double nomresult [n];
	double result;
	for (int i=0; i<n; i++){
		cout<<"Please enter x["<<i<<"]: "<<endl;
		cin>>xs[i];
		cout<<"Please enter y["<<i<<"]: "<<endl;
		cin>>ys[i];
	}
	Repeat:
	cout <<"Please enter the value to interpolate: "<<endl;
	x = 0;
	result = 0;
	cin>>x;
	for (int f=0; f<n; f++){
		denom =1;
	for (int d=0; d<n; d++){
		if (f == d) continue;
		else{
		denom *= xs[f] - xs[d];
		denomresult[f] = denom;	
	}
	}
		}
		
	for (int f=0; f<n; f++){
		nom =1;
	for (int d=0; d<n; d++){
		if (f == d) continue;
		
		else{
		nom *= x - xs[d];
		nomresult[f] = nom;
	}
	}
		}	
	for (int r=0; r<n; r++){
		
		result += (ys[r]/denomresult[r]) * nomresult[r];
	}
	cout<<"\n\n"<<endl;
	cout<<"The y("<<x<<")"<<" is equal to "<<result<<endl;
	cout<<"\n\n"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\n"<<endl;
	cout<<"Do you want to solve for another point? (Enter yes or y to repeat)"<<endl;
	cin>>repeat;
	if(repeat == "yes" || repeat == "y") goto Repeat;
	else {
		cout<<"Do you want to solve another new problem? (Enter yes or y to repeat)"<<endl;
		cin>>newproblem;
		if (newproblem == "yes" || newproblem == "y") goto newproblem;
		else exit(0);
	}	
}
