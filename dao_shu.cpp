#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a; 
	int outResult=0;
	int weiI=0;
	int fu=1;
	cin>>a;
	if(a<0)
	fu=-1;
	int tmp;
	tmp=a*fu;
	
	while (tmp>0)
	{   cout<<"tmp:"<<tmp<<endl;
		weiI=tmp%10;
		cout<<"weiI:"<<weiI<<endl;
		outResult=outResult*10+weiI;
		cout<<"outResult:"<<outResult<<endl;	
		tmp=tmp/10;
		cout<<"tmp after:"<<tmp<<endl;		
	}
   cout<<outResult*fu;
   
	return 0;
}
