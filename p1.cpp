#include <iostream>

using namespace std;

int main() {

  int numOfSets = 0;
  int numOfItems;
  int counter;
  int sum = 0;

  cin >> numOfSets;

  int output[numOfSets];
  
  for (int i = 0; i < numOfSets; i++) {

    counter = 0;
    cin >> numOfItems;
    int arr[numOfItems];
    for (int i = 0; i < numOfItems; i++) {
      cin >> arr[i];
    }

    for (int a = 0; a < numOfItems; a++) {

      for (int b = a + 1; b < numOfItems; b++) {
    sum = arr[a] + arr[b];
    if (sum % 3 == 0) {
      counter++;
    }
      }

    }

    output[i] = counter;
    
  }

  for (int i = 0; i < numOfSets; i++) {
    cout << output[i] << endl;
  }

  return 0;

}
