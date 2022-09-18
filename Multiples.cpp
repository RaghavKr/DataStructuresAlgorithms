#include <iostream>
using namespace std;

int gcd(int a, int b){
	if (b == 0){
		return a;
	}
	return gcd(b, a%b);
}

int lcm(int a, int b){
	return ((a*b) / gcd(a, b));
}

int output(int firstNum, int secondNum, int max){
	int firstMax = max - (max % firstNum);
	int secondMax = max - (max % secondNum);
	int lcmVal = lcm(firstNum, secondNum);
	int lcmMax = max - (max % lcmVal);

	int firstSum = (((firstMax / firstNum) * ((firstMax / firstNum) + 1)) / 2) * firstNum;
	int secondSum = (((secondMax / secondNum) * ((secondMax / secondNum) + 1)) / 2) * secondNum;
	int lcmSum = (((lcmMax / lcmVal) * ((lcmMax / lcmVal) + 1)) / 2) * lcmVal;

	return firstSum + secondSum - lcmSum;
}

int main(){
    int max = 1000;
	
	int firstNum;
	int secondNum;

	cin >> firstNum >> secondNum;
	cout << output(firstNum, secondNum, max) << endl;
}