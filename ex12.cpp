#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  
  int count = 1;
    
  for(int i = 1; i < S.size(); i++) {
    if (S.at(i) == '+') {
      count++;
    }
    else if (S.at(i) == '-') {
      count--;
    }
  }
 
  cout << count << endl;
}