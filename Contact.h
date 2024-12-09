//
// Created by Jacob on 2024-12-05.
//

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Contact {
public:
    Contact(const std::string& name, int age);

    void addFriend(Contact* newFriend);

    void removeFriend(const std::string& friendName);

private:
    std::string name;
    int age;
    std::vector<Contact*> friends;
};

#endif
