#include<iostream>

using namespace std;

int calculation(int opcode,int num1, int num2){
		switch(opcode){
		case 1:
			return num1 + num2;
		case 2:
			return num1 - num2;
		case 3:
			return num1 * num2;
		case 4:
			return num1 / num2;	
		}
	}

int main(){
	int opcode,num1,num2;
	while(cin>>opcode>>num1>>num2){
		int res = calculation(opcode,num1,num2);
		cout<<res<<endl;
	}
	return 0;
}
