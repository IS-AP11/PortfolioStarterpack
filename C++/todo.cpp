#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> tasks;

void add_task(const std::string& task) {
    tasks.push_back(task);
    std::cout << "Task added." << std::endl;
}

void list_tasks() {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << (i + 1) << ": " << tasks[i] << std::endl;
    }
}

void remove_task(size_t index) {
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        std::cout << "Task removed." << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./todo add \"task\" | list | remove <index>" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    if (command == "add" && argc == 3) {
        add_task(argv[2]);
    } else if (command == "list") {
        list_tasks();
    } else if (command == "remove" && argc == 3) {
        remove_task(std::stoul(argv[2]));
    } else {
        std::cout << "Invalid command." << std::endl;
    }
    return 0;
}
