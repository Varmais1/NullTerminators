#include <iostream>
#include<cmath>

using namespace std;

int main() {

int numOfSets = 0;
  int numOfItems;
  int counter;
  int sum = 0;

  cin >> numOfSets;
  cin.ignore();

  int output[numOfSets];
  
  for (int i = 0; i < numOfSets; i++) {

    counter = 0;
    cin >> numOfItems;
    cin.ignore();
    int arr[numOfItems];
    int withSpaces = numOfItems * 10;
    char input[withSpaces];
    cin.get(input, withSpaces);
    cin.ignore();
    int itr = 0;
    for (int i = 0; i < numOfItems; i++) {
      int digits[10];
      for(int l = 0; l < 9; l++) {
	digits[l] = 0;
      }
      if(input[itr] == ' ') {
	itr++;
      }
      unsigned int j = 9;
      while(input[itr] != ' ' && input[itr] != '\0' && input[itr] != '\000') {
	digits[j] = (int)input[itr] - 48;
	j--;
	itr++;
      }
      int number = 0;
      for(int k = 9; k >= 0; k--) {
	number += digits[k] * pow(10,9-k);
      }
      arr[i] = number;
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
