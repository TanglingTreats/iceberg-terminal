#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include "order.h"
#include "limit-level.h"

int main() {

  std::vector<Order> orders;

  // Create an order
  orders.push_back(* new Order(2341243, Side::BuyOrder, 244, 5));

  
  return 0;
}
