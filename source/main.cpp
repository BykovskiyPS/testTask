#include <iostream>
#include <string>
#include <sstream>
#include "base.h"

using namespace std;

/*
 *  Accounting for abstract positions
*/

int main() {
    
    cout << "Enter 'add name cost quantity' for add position,\n"
         << "'del id' for remove position with number equal id\n"
         << "'print' for print base\n"
         << "'find name order' for search order with name 'name'\n";
         
    Base base;
    string input;
    while(getline(cin, input)) {
        istringstream stream(input);
        string command;
        stream >> command;
        if(command == "add") {
            string name;
            size_t cost;
            size_t quantity;
            stream >> name >> cost >> quantity;
            base.add(name, cost, quantity);
        } else if(command == "del") {
            size_t id;
            stream >> id;
            base.del(id);
        } else if(command == "print") {
            base.print();
        } else if(command == "find") {
            string name;
            stream >> name;
            Order order = base.find(name);
            cout << order << endl;
        } else if(command == "q") {
            break;
        } else {
            cout << "Wrong command" << endl;
            return 1;
        }
    }

    return 0;
}