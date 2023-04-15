#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  int numOfSets = 0;
  int N = 0;
  int q = 0;
  int T = 0;
  double result = 0;
  
  cin >> numOfSets;

  float output[numOfSets];
  
  for (int i = 0; i < numOfSets; i++) {

    N = 0;
    q = 0;
    T = 0;
    result = 0;
    float temp = 0;

    cin >> N;
    cin >> q;
    cin >> T;
    
    result = (log2(pow(N, q))) / (sqrt(abs(42 * sin(T))));
    
    temp = round(result * 100.00) / 100.0;

    output[i] = temp;
    
  }

  for (int i = 0; i < numOfSets; i++) {

    cout << output[i] << endl;
    
  }
  
  return 0;
  
}
