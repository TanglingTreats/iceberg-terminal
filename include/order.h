#ifndef ORDER_H
#define ORDER_H

using OrderId = double;
using Price = double;
using Quantity = double;

enum class Side {
  Buy,
  Sell
};

struct Order {

  OrderId id;
  Price price;
  Quantity quantity;

  Side side;

  Order(OrderId id, Price price, Quantity qty, Side side) : id(id), price(price), quantity(qty), side(side) {};

};

#endif
