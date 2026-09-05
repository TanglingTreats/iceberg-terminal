#ifndef ORDER_ENTRY_H
#define ORDER_ENTRY_H

#include <iostream>

enum OrderType {
  kBuyOrder,
  kSellOrder
};
  
class OrderEntry {
public:
  OrderEntry(int id);
  void SetOrder(float price, float quantity, OrderType type);
  void GetOrder();
  
private:
  int id;
  float price;
  float quantity;

  OrderType orderType;
};

#endif
