// Copyright TimurZaytsev 2021
#include <iostream>
#include <string>
#include <time.h>

#include "train.h"

int main() {
  srand(time(0));
  int size = std::rand() % 100 + 1;
  Train train;
  for (int j = 0; j < size; j++) {
    train.addCarriage();
  }
  train.printTrain();
  std::cout << train.lengthTrain() << '\n';
  return 0;
}