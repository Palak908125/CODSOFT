#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string name;
    bool completed;
};

vector<Task> tasks;

// Function to add a task
void addTask() {
    Task t;
    cin.ignore();
    cout << "Enter task: ";
    getline(cin, t.name);
    t.completed = false;

    tasks.push_back(t);
    cout << "Task added successfully!\n";
}

// Function to view all tasks
void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n----- To-Do List -----\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].name
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}

// Function to mark a task as completed
void markCompleted() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    viewTasks();

    int choice;
    cout << "Enter task number to mark as completed: ";
    cin >> choice;

    if (choice >= 1 && choice <= tasks.size()) {
        tasks[choice - 1].completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

// Function to remove a task
void removeTask() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    viewTasks();

    int choice;
    cout << "Enter task number to remove: ";
    cin >> choice;

    if (choice >= 1 && choice <= tasks.size()) {
        tasks.erase(tasks.begin() + choice - 1);
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting To-Do List Manager...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}