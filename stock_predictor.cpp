// Autotrader
// by Sammy Hasan
#include <stdlib.h>
#include <iostream>
#include <vector>
# include <time.h>


using namespace std;


int main(void){

  srand(time(NULL));
  vector<string> predictions;
  predictions.push_back("Up");
  predictions.push_back("Down");

  int r = rand()%2;

  cout << "Stock will go " << predictions[r]<< endl;
  return 0;
}


// when a programmer has free time and a sense of humor, this programme is the result
