#include <iostream>

using namespace std;

int main() {

  int numOfSets = 0;
  int numOfPairs;

  cin >> numOfSets;

  int output[numOfSets];
  
  for (int i = 0; i < numOfSets; i++) {

    numOfPairs = 0;
    cin >> numOfPairs;
    output[i] = numOfPairs + 2;
    
  }

  for (int i = 0; i < numOfSets; i++) {

    cout << output[i] << endl;
    
  }
  
  return 0;
  
}
