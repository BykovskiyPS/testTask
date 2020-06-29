#pragma once
#include <string>
#include <vector>
#include <iomanip>

struct Order {
    // Order(std::string new_name, size_t new_cost, size_t new_quantity) :
    // name(new_name), cost(new_cost), quantity(new_quantity) {};

    size_t id = 0u;
    std::string name;
    size_t cost;
    size_t quantity;
};

std::ostream& operator<<(std::ostream& stream, const Order& order);

class Base {
public:

    Base();
    void add(std::string name, size_t cost, size_t quantity);
    bool del(size_t id);
    void print();
    Order find(std::string name);

private:
    std::vector<Order> base;
};