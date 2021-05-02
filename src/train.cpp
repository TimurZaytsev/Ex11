// Copyright TimurZaytsev 2021
#include "train.h"
#include <iostream>

Carriage::Carriage() {
  next = nullptr;
  prev = nullptr;
  light = std::rand() % 2;
}

void Train::addCarriage() {
  Carriage* next_carriage = new Carriage();
  if (!first) {
    first = next_carriage;
    last = next_carriage;
    first->next = last;
    first->prev = last;
  }
  next_carriage->prev = last;
  next_carriage->next = first;
  last->next = next_carriage;
  last = next_carriage;
}

void Train::printTrain() const {
  auto temp = first;
  int j = 1;
  while (temp != last) {
    std::cout << j << " carriage - " << temp->get() << '\n';
    temp = temp->next;
    j++;
  }
  std::cout << j << " carriage - " << last->get() << '\n';
}

int Train::lengthTrain() const {
  int length = 1;
  auto actual_carriage = first;
  first->off();
  while (true) {
    for (int j = 0; j < length; j++) {
      actual_carriage = actual_carriage->next;
      actual_carriage->on();
    }
    for (int j = 0; j < length; j++) {
      actual_carriage = actual_carriage->prev;
    }
    if (actual_carriage->get()) return length;
    length++;
  }
}