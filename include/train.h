// Copyright TimurZaytsev 2021
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Carriage {
  bool light;

 public:
  Carriage* next;
  Carriage* prev;
  Carriage();
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
};

class Train {
  Carriage* first;
  Carriage* last;

 public:
  Train() : first(nullptr), last(nullptr) {}
  void addCarriage();
  void printTrain() const;
  int lengthTrain() const;
};

#endif  // INCLUDE_TRAIN_H_
