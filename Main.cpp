//
// Created by Jacob on 2024-12-05.
//
#include <stdio.h>
#include "Contact.h"

int main() {
    int main() {

        // create the vector of Contact pointers
        // instantiate a ContactUtility object

        int userOption {};

        while (true) {
            std::cout << "\n**Pick an option from the following list**\n";
            std::cout << "1: Show Contacts\n"
                         "2: Add Contact\n"
                         "3: Add Friend\n"
                         "4: Print Friends\n"
                         "5: Delete Contact\n"
                         "6: Quit\n";
            std::cin >> userOption;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            switch (userOption) {
                // set up the switch to call the appropriate ContactUtility method
            } case 1: {

            } case 2: {

            } case 3: {

            } case 4: {

            } case 5: {

            } case 6: {
                std::cout << "Exiting the program.\n";
                return 0;
            }
            default: {
                std::cout << "Invalid option. Please try again.\n";

        }
    }
}
