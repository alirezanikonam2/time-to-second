#include<iostream>
using namespace std;
#include<string>
int main(){
	int c =  0,b,d,f,g,h,n ;
	string a;
	cout << "welcom to this program this program is for trancfor time to second";
	cout << "please enter time for Example 01:09:23" << endl;
	cin >> a;
	b = a[0]-48;
	d = a[1]-48;
	f = a[3]-48;
	g = a[4]-48;
	h = a[6]-48;
	n = a[7]-48;
	
    b = b*36000;
	d = d*3600;
	f = f*600; 
	g = g*60;
	h *= 10;
	c = b + d + f + g + h + n;
	cout << c;
	system("pause");
	return 0;
}