#include <iostream>
#include <string.h>

using namespace std;

int table[100][100];

int lenSub(string A, string B){
    for (int i = 0; i <= A.length(); i++){
        table[0][i] = 0; 
    }
    for (int j = 0; j <= B.length(); j++){
        table[j][0] = 0;
    }

    for (int i = 1; i <= A.length(); i++){
        for (int j = 1; j <= B.length(); j++){
            if (A[i-1] == B[j-1]){
                table[i][j] = 1 + table[i-1][j-1];
            }
            else {
                table[i][j] = table[i-1][j] > table[i][j-1] ? table[i-1][j]:table[i][j-1];
            }
        }
    }

    return table[A.length()][B.length()];
}

int main(){
    string a;
    string b;
    cin >> a >> b;
    lenSub(a, b);
}