#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int sets = 0;
  cin >> sets;
  int input[sets];
  for(int i = 0; i < sets; i++) {
    int inp = 0;
    cin >> inp;
    input[i] = inp;
  }
  for(int i = 0; i < sets; i++) {
    int code = input[i];
    int decode = abs(code);
    if(code < 0) {
      cout << "pian";
      if(decode == 1) {
	cout << "o" << endl;
	continue;
      }
    }
    else if(code > 0) {
      cout << "fort";
      if(decode == 1) {
	cout << "e" << endl;
	continue;
      }
    }
    cout << "issi";
    for(int j = 2; j < decode; j++) {
      cout << "ssi";
    }
    cout << "mo" << endl;
  }




  return 0;
}
