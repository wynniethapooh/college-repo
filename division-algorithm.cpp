/*	
	01/28/23
	Guiruela, Selwyn John G.
	CSMC121 - ZC11
	E2 [1.1 - Th. 2]
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

bool t1(int a, int b, int c){
	cout << boolalpha;
	bool flag = true;
	if(b % a == 0 && c % a == 0){
		printf("Theorem 1:\n%d | (%d+%d) = ",a,b,c); 
		return flag;
	}else{
		printf("Input does not follow theorem 1! = ");
		return !flag;
	}
}	

bool t2(int a, int b, int c){
	bool flag = true;
	if(b % a == 0 && b*c % a == 0){
		printf("Theorem 2:\nFor all integers c, %d | %d*%d = ",a,b,c);
		return flag;
	}else{
		printf("Input does not follow theorem 2! = ");
		return !flag;
	}
}

bool t3(int a, int b, int c){
	bool flag = true;
	if(b % a == 0 && c % b == 0){
		printf("Theorem 3:\n%d | %d = ",a,c);
		return flag;
	}else{
		printf("Input does not follow theorem 3! = ");
		return !flag;
	}
}

void ynn(char yn){
	bool flag2 = true;
	do{
	if(yn == 'y'){
		system("clear");
		break;
	}else if(yn == 'n'){
		break;
	}
	}while(yn != 'y' || yn != 'n');
	cout << endl;
}

int main(){
	int a,b,c;
	int x = 0;
	char yn;
	bool flag2 = true;

	while(flag2){
		cout << "Dividend: ";
		cin >> b;
		cout << "Divisor: ";
		cin >> a;
		cout << "An Integer: ";
		cin >> c;
		cout << endl;
	
		if(a != 0){
			cout << t1(a,b,c) << endl << endl;
			cout << t2(a,b,c) << endl << endl;
			cout << t3(a,b,c) << endl << endl;
			
			cout << "Do you want to run the program again? y/n: ";			
			cin >> yn;
			do{
			if(yn == 'y'){
				system("clear");
				flag2 = true;
				break;
			}else if(yn == 'n'){
				flag2 = false;
				break;
			}
			}while(yn != 'y' || yn != 'n');
		}else{
			cout << "Divisor should not be 0!\n\n";
			cout << "Do you want to run the program again? y/n: ";			
			cin >> yn;
			do{
			if(yn == 'y'){
				system("clear");
				flag2 = true;
				break;
			}else if(yn == 'n'){
				flag2 = false;
				break;
			}
			}while(yn != 'y' || yn != 'n');
		}

	}
	
return 0;