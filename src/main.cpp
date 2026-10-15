#include <iostream>
#include <stdlib.h>
#include <vector>
#include "order.h"
#include "limit-level.h"

int main() {

  std::vector<Order> orders;

  // Create an order
  orders.push_back(Order(123422, 255, 12, Side::Buy));
  orders.push_back(Order(34332, 255, 12, Side::Buy));
  orders.push_back(Order(32554, 2520, 12, Side::Sell));

  orders.insert(orders.begin() + 2, Order(9983, 230, 5, Side::Sell));

  std::cout << orders[0].id << std::endl;
  std::cout << orders[orders.size() - 1].id << std::endl;

    std::cout << orders[orders.size() - 2].id << std::endl;
  
  return 0;
}
