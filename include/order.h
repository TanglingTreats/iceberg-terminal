#ifndef ORDER_H
#define ORDER_H

#include <cstdint>
#include <iostream>

enum class Side { BuyOrder, SellOrder }; // Prevent implicit conversion to integers and name clashes

using OrderId = uint64_t;
using Price = uint64_t;
using Quantity = uint64_t;
  
struct Order {
  OrderId id;
  Price price;
  Quantity quantity;
  Side side;

  Order *prev = nullptr;
  Order *next = nullptr;

  // Initializer list
  Order(OrderId id, Side side, Price price, Quantity qty) : id(id), side(side), price(price), quantity(qty) {}
};

#endif
