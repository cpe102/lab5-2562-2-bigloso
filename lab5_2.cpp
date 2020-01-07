#include<iostream>
#include<string>
using namespace std;

string mixText (string i,string b){
	int L1 = i.size();
	int L2 = b.size();
    int x = 0 ;
	string y ="" ;
	if(L1==L2){
	while (x<L1)
	{
		y += i[x] ;
		y += b[x] ;
		x++ ;
		
	}
	return y ;
	
	}
	else
	{
		return "E" ;
	}
	
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
