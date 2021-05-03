// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>

#include "train.h"

TEST(train, test1) {
  Carriage carriage;
  carriage.on();
  EXPECT_EQ(true, carriage.get());
}

TEST(train, test2) {
  Train train;
  for (int j = 0; j < 1000; j++) {
    train.addCarriage();
  }
  EXPECT_EQ(1000, train.lengthTrain());
}

TEST(train, test3) {
  Train train;
  for (int j = 0; j < 2; j++) {
    train.addCarriage();
  }
  EXPECT_EQ(2, train.lengthTrain());
}