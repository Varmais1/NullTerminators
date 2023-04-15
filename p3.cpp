#include <iostream>

using namespace std;

int main() {

  int numOfSets = 0;
  int numOfBags;
  int maxWeight = 0;
  int smallest = 0;
  int smallestIndex = 0;
  int tempWeight = 0;
  int numOfFits = 0;
  int currentWeight;
  int repetitions;
  
  cin >> numOfSets;

  int output[numOfSets];
  
  for (int i = 0; i < numOfSets; i++) {

    numOfBags = 0;
    currentWeight = 0;
    repetitions = 0;
    numOfFits = 0;
    
    cin >> numOfBags;
    int bagWeights[numOfBags];
    cin >> maxWeight;

    for (int j = 0; j < numOfBags; j++) {
      cin >> tempWeight;
      bagWeights[j] = tempWeight;
    }

    if (numOfBags == 1) {
      if (bagWeights[0] < maxWeight) {
        numOfFits++;
	output[i] = numOfFits;
      }
      output[i] = 0;
      continue;
    }

    while (repetitions != numOfBags) {//add smallest bags that fit

      for (int j = 0; j < numOfBags; j++) {//finding a default smallest bag for this repetition
	if (bagWeights[j] != -1) {
	  smallest = bagWeights[j];
	  smallestIndex = j;
	  break;
	}
      }
      
      for (int j = 0; j < numOfBags; j++) {//finding the smallest bag that hasn't been set to -1
	if (bagWeights[j] < smallest && bagWeights[j] != -1) {
	  smallest = bagWeights[j];
	  smallestIndex = j;
	}
      }
      
      currentWeight += smallest;
      bagWeights[smallestIndex] = -1;

      if (currentWeight <= maxWeight) {//current weight still isn't more than the maxWeight
	numOfFits++;
      }
      else {//we have reached the max with this particualr bag
	currentWeight -= smallest;
      }
      
      repetitions++;
      
    }

    output[i] = numOfFits;
    
  }

  for (int i = 0; i < numOfSets; i++) {
    cout << output[i] << endl;
  }
  
  return 0;
  
}
