#ifndef LIMIT_LEVEL_H
#define LIMIT_LEVEL_H

#include "order.h"

struct LimitLevel {
  Price price;
  Quantity totalVolume;

  Order *head;
  Order *tail;

  // Prevent implicit type conversions and copy-initialization
  explicit LimitLevel(Price p) : price(p) {}

  
  
};

#endif
