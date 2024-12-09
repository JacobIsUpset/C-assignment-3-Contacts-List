//
// Created by Jacob on 2024-12-05.
//
#include <stdio.h>
#include "Contact.h"

int main() {
    Contact alice("Alice", 25);
    Contact bob("Bob", 30);
    Contact amanda("Amanda", 28);

    alice.addFriend(&bob);
    alice.addFriend(&amanda);

    alice.removeFriend("Amanda");

    return 0;
}
