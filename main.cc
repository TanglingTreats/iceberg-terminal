#include <iostream>
#include <stdlib.h>
#include <memory>
#include "order-entry.h"

template <typename T> class ArrayList {
public:
  ArrayList(int size) {
    stack = calloc(size, sizeof(T));
    this->size = size;
    this->count = 0;

  }
  void push(OrderEntry oe) {
    if (size == count) {
      // Resize
      size += 100;
      stack = realloc(stack, size);

    } else {
      
      stack[count++] = oe;
      
    }
  }
  OrderEntry pop() {
    OrderEntry oe = stack[count--];

    stack[count--] = NULL;

    return oe;
  }

  ~ArrayList() { free(this->stack); }
  
private:
  int size = -1;
  int count = -1;
  std::unique_ptr<T[]> stack;
};

int main() {

  // Create an order
  std::unique_ptr<OrderEntry> oe =  std::make_unique<OrderEntry>(12345);
  oe->SetOrder(1.0f, 25.0f, OrderType::kBuyOrder);

  oe->GetOrder();
  
  return 0;
}
