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
private:
    std::string* m_name { nullptr };
    int m_age {};
    std::vector<Contact*> m_friends {};
    Contact(std::string* name, int age);
    void addFriend(Contact* newFriend);
    void removeFriend(std::string_view friendName);
};


#endif //ASSIGNMENT_3_CONTACT_H