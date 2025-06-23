#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS = 100;

string tasks[MAX_TASKS];
bool completed[MAX_TASKS];
int taskCount = 0;

void showMenu() {
    cout << "\n==== TO-DO LIST MANAGER ====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Delete Task\n";
    cout << "5. Clear All Tasks\n";
    cout << "6. Exit\n";
    cout << "Choose an option (1-6): ";
}

void addTask() {
    if (taskCount >= MAX_TASKS) {
        cout << "Task limit reached!\n";
        return;
    }
    cin.ignore();
    cout << "Enter task description: ";
    getline(cin, tasks[taskCount]);
    completed[taskCount] = false;
    taskCount++;
    cout << "Task added successfully.\n";
}

void viewTasks() {
    if (taskCount == 0) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\n--- Your Tasks ---\n";
    for (int i = 0; i < taskCount; ++i) {
        cout << i + 1 << ". [" << (completed[i] ? "X" : " ") << "] " << tasks[i] << endl;
    }
}

void markCompleted() {
    int index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    if (index < 1 || index > taskCount) {
        cout << "Invalid task number!\n";
        return;
    }
    if (completed[index - 1]) {
        cout << "Task is already marked as completed.\n";
    } else {
        completed[index - 1] = true;
        cout << "Task marked as completed.\n";
    }
}

void deleteTask() {
    int index;
    cout << "Enter task number to delete: ";
    cin >> index;
    if (index < 1 || index > taskCount) {
        cout << "Invalid task number!\n";
        return;
    }
    for (int i = index - 1; i < taskCount - 1; ++i) {
        tasks[i] = tasks[i + 1];
        completed[i] = completed[i + 1];
    }
    taskCount--;
    cout << "Task deleted successfully.\n";
}

void clearAll() {
    taskCount = 0;
    cout << "All tasks cleared.\n";
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        showMenu();
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
                deleteTask();
                break;
            case 5:
                clearAll();
                break;
            case 6:
                cout << "Exiting To-Do Manager. Goodbye!\n";
                running = false;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
