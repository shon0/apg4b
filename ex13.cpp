#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> A(N);
  
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  
  int sum = 0;
  
  for (int i = 0; i < N; i++) {
    sum += A.at(i);
  }
  
  int mean = sum / N;
  
  for (int i = 0; i < N; i++) {
    if (mean > A.at(i)) {
      cout << mean - A.at(i) << endl;
    }
    else {
      cout << A.at(i) - mean << endl;
    }
  }
}