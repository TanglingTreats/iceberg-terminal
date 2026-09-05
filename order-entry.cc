#include "order-entry.h"

OrderEntry::OrderEntry(int id) {
  this->id = id;
  std::cout << "Creating order entry for: " << id << std::endl;
}

void OrderEntry::SetOrder(float price, float quantity, OrderType type) {
  this->price = price;
  this->quantity = quantity;
  this->orderType = type;
}

void OrderEntry::GetOrder() {
  std::cout << "Price: " << this->price;
  std::cout << "\tQuantity: " << this->quantity << std::endl;
}
