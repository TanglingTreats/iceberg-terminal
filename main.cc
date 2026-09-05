#include <iostream>
#include "order-entry.h"

int main() {

  OrderEntry* oe = new OrderEntry(12345);

  oe->SetOrder(1.0f, 25.0f, OrderType::kBuyOrder);

  oe->GetOrder();
  
  return 0;
}
