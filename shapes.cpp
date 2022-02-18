#include<iostream>
#include<windows.h>
using namespace std;
main(){
	system("color 1D");
    int i,j,k;
    cout<<"(A)\n\n";
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
		cout<<"*";
		}
		cout<<endl;
	}	
    cout<<endl<<"(B)"<<"\n\n";
    
    for(i=1;i<=10;i++){
    	for(j=10;j>=i;j--){
    		cout<<"*";
		}
		cout<<endl;
	}
    cout<<endl<<"(C)"<<"\n\n";
    
    for(i=10;i>=1;i--){
    	for(j=10;j>=i;j--){
    		cout<<" ";
		}
		for(k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl<<"(D)"<<"\n\n";
	
    for(i=10;i>=1;i--){
    	for(j=1;j<=i;j++){
    		cout<<" ";
		}
		for(k=10;k>=i;k--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
