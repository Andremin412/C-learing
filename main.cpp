#include <iostream>
using namespace std;

int* getEveryNumber(int num);
bool isWaterNumber(int num,int* x);

int main(){
	int num;
	cin >> num;
	int* x = getEveryNumber(num);
	if (isWaterNumber(num,x)) cout<<num<<"is WaterNumber!"<<endl;
	else cout<<num<<"is not WaterNumber"<<endl;
	return 0;
}


int* getEveryNumber(int num){
	int* x;
	int i = 0;
	while(num >= 10){
		*(x+i) = num%10;
		num = num / 10;
		i++;
	}
	*(x+i)=num;
	*(x+i+1)=-1;
	return x;
}

bool isWaterNumber(int num,int* x){
	int sum = 0;
	while(*x!=-1){
		sum += (*x) * (*x) * (*x);
		x++;
	}
	if(sum == num) return true;
	else return false;
}
