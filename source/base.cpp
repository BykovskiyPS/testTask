#include "base.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& stream, const Order& order) {
    stream << setw(5) << order.id
           << setw(10) << order.name 
           << setw(10) << order.cost
           << setw(10) << order.quantity;
    return stream;
}

Base::Base() {};

void Base::add(string name, size_t cost, size_t quantity) {
    size_t id = base.size();
    Order order = {id, name, cost, quantity};
    base.push_back(order);
}

bool Base::del(size_t id) {
    if(id > base.size()) {
        cout << "There isn't order with id " << id;
        return false;
    } else {
        base.erase(base.begin() + id);
        return true;
    }
}

void Base::print() {
    cout << setw(5) << "id"
         << setw(10) << "name" 
         << setw(10) << "cost"
         << setw(10) << "quantity"
         << endl;
    for(Order& order : base) {
        cout << order << endl;
    }
} 

Order Base::find(string name) {
    for(Order& order : base) {
        if(order.name == name) {
            return order; 
        }
    }
}