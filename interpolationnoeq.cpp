//This code is written by Mustafa Hesham Mohamed.
#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	string repeat;
	int n = 0;
	Repeat:
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
	
	cout <<"Please enter the value to interpolate: "<<endl;
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
	cout<<"Do you want to solve another problem? (Enter yes or y to repeat)"<<endl;
	cin>>repeat;
	if(repeat == "yes" || repeat == "y") goto Repeat;
	else exit(0);	
}
