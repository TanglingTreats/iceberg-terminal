#ifndef LIMIT_H
#define LIMIT_H

#include "order.h"

struct LimitLevel {

  Price price;

  Quantity restingVol;

  Order *top;
  Order *bottom;


  LimitLevel(Price price) : price(price) {}


  // Insert at the end of the list (price-priority)
  void push(Order *order) {}

  // Remove any order (for any reasons)
  void remove(Order *order) {}

  // Check if this limit level is empty
  bool isEmpty() {
    return top == nullptr;
  }

};

#endif
