//
//  main.cpp
//  To Do List
//
//  Created by Jake Bowen on 10/18/24.
//

#include <iostream>
#include <vector>
#include <limits> // For std::numeric_limits
#include "To_do_list.cpp"

ToDoList list;
void ClearScreen() {
    for (int i = 0; i < 50; ++i) {
        std::cout << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int input;
    bool program = true;
    do {
        ClearScreen();
        std::cout << "--------- To Do List --------" << std::endl;
        list.PrintTasks();
        for (int i = 0; i < 5; i++){
            std::cout << std::endl;
        }
        std::cout << "Select an Option" << std::endl;
        std::cout << "1. Add a new task" << std::endl;
        std::cout << "2. Delete a task" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> input;
        
        
        if (std::cin.fail()) {
            // Input was not an integer
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Enter any number to return back to screen" << std::endl;
            std::cin >> input; // Wait for user to press Enter
            continue; // Restart the loop
        }
        
        if (input == 1) {
            std::string new_task;
            std::cout << "Enter Task: ";
            std::cin >> new_task;
            list.AddTasks(new_task);
        } else if (input == 2) {
            std::cout << "Select task to delete: ";
            size_t deleteT;
            std::cin >> deleteT;
            list.DeleteTasks(deleteT);
        } else if (input == 3) {
            std::cout << "Goodbye!! ";
            program = false;
        }


    } while (program == true);
    return 0;
}
