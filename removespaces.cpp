//removes spaes
void removeSpaces(char sentence[]) {
  //iterator variables
  int i = 0;
  int j = 0;
  while(true) {
    //if the character is a space, increment i
    if((int)sentence[i] == 32) {
      i++;
    }
    //if the character is a null character, make the end of the array a null character at the index of j
    else if(sentence[i] == '\0') {
      sentence[j] == '\0';
      break;
    }
    //otherwise, set sentence[j] = sentence[i], and increment both i and j
    else {
      sentence[j] = sentence[i];
      i++;
      j++;
    }
  }
}
