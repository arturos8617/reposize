#include <iostream>


using namespace std;
main(){
	string dato;
	int a;
	getline(cin,dato);
	if(dato=="int"){
		cout<<sizeof(a)<<endl;
	}
	else if(dato=="char"){
		cout<<sizeof(char)<<endl;
	}
	else if(dato=="short"){
		cout<<sizeof(short)<<endl;
	}
	else if(dato=="float"){
		cout<<sizeof(float)<<endl;
	}
	else if(dato=="double"){
		cout<<sizeof(double)<<endl;
	}
	else if(dato=="long"){
		cout<<sizeof(long)<<endl;
	}
	return 0;
}
