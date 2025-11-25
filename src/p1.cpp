#include<iostream>

using namespace std;

int calculation(int opcode,int num1, int num2){
		switch(opcode){
		case 1:
			return num1 + num2;//後面不用加break ,return 完後會離開函數將值回傳 
		case 2:
			return num1 - num2;
		case 3:
			return num1 * num2;
		case 4:
			return num1 / num2;	
		}
		return 0;
	}

int main(){
	int opcode,num1,num2;
	while(cin>>opcode>>num1>>num2){
		int res = calculation(opcode,num1,num2);//要注意這一步!! 
		cout<<res<<endl;
	}
	return 0;
}
