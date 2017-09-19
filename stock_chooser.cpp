// Autotrader
// by Sammy Hasan
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>
#include <numeric>

using namespace std;


int main(void){

  srand(time(NULL));
  int r = rand()%2;

  int num_stocks;
  int num_choices;

  cout << "Enter number of stocks as Int: ";
  cin >> num_stocks;

  cout << "Enter number of choices to make as Int: ";
  cin >> num_choices;

  // int arr_stocks[] = new int[num_stocks];
  vector<int> vec_stocks(num_stocks);
  iota(begin(vec_stocks), end(vec_stocks), 0);


  for (int i=0;i<num_stocks;i++) {vec_stocks[i] = i+1;}

  random_shuffle(begin(vec_stocks), end(vec_stocks));

  cout << "Choose: ";
  for (int c=0;c<num_choices;c++){
    cout << vec_stocks[c] << " ";
  }
  cout <<", by index." << endl;


  return 0;
}


// when a programmer has free time and a sense of humor, this programme is the result
