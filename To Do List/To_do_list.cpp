//
//  To_do_list.cpp
//  To Do List
//
//  Created by Jake Bowen on 10/18/24.
//

#include "To_do_list.hpp"

class ToDoList {
public:
    void PrintTasks() {
        for (size_t i = 0; i < tasks.size(); i++){
            std::cout << i + 1 << ": ";
            std::cout << tasks.at(i) << std::endl;
        }
    }
    void AddTasks(std::string new_task) {
            tasks.push_back(new_task);
        }
    void DeleteTasks(size_t pos) {
        if (pos > tasks.size()) {
            std::cout << "Not a valid postion in the list";
        }
        tasks.erase(tasks.begin() + pos-1);
    }
private:
    std::vector<std::string> tasks;
    
};
