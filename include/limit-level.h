#ifndef LIMIT_H
#define LIMIT_H

#include "order.h"

struct LimitLevel {

  Price price;
  Side side; // An object per side?

  Order *top;
  Order *bottom;


  LimitLevel(Price price) : price(price) {}

  
  
};

#endif
