//
// Created by Jacob on 2024-12-09.
//

#include "Contact.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Contact {
public:
    Contact(const std::string& name, int age) : name(name), age(age) {}

    void addFriend(Contact* newFriend) {
        friends.push_back(newFriend);
        std::cout << "you are now friends with " << newFriend->name << '\n';
    }

    void removeFriend(const std::string& friendName) {
        auto currentFriend = std::remove_if(friends.begin(), friends.end(),
            [&](Contact* contact) { return contact->name == friendName; });
        if (currentFriend != friends.end()) {
            std::cout << "you are no longer friends with " << (*currentFriend)->name << '\n';
            friends.erase(currentFriend);
        }
    }

private:
    std::string name;
    int age;
    std::vector<Contact*> friends;
};
