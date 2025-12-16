<<<<<<< HEAD

=======
>>>>>>> branch2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
<<<<<<< HEAD
#define MAX_LEN 100

typedef struct {
    char text[MAX_LEN];
    int done;
} Task;

Task tasks[MAX_TASKS];
int taskCount = 0;

void loadTasks() {
    FILE *file = fopen("tasks.txt", "r");
    if (file == NULL) return;

    while (fscanf(file, "%d %[^\n]\n",
                  &tasks[taskCount].done,
                  tasks[taskCount].text) == 2) {
        taskCount++;
    }

    fclose(file);
}

void saveTasks() {
    FILE *file = fopen("tasks.txt", "w");
    if (file == NULL) {
        printf("Could not save tasks.\n");
        return;
    }

    for (int i = 0; i < taskCount; i++) {
        fprintf(file, "%d %s\n",
                tasks[i].done,
                tasks[i].text);
    }

    fclose(file);
}

void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task list is full.\n");
        return;
    }

    printf("Enter task: ");
    getchar(); // clear newline
    fgets(tasks[taskCount].text, MAX_LEN, stdin);

    tasks[taskCount].text[strcspn(tasks[taskCount].text, "\n")] = '\0';
    tasks[taskCount].done = 0;
    taskCount++;

    printf("Task added.\n");
}

void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks yet.\n");
        return;
    }

    for (int i = 0; i < taskCount; i++) {
        printf("%d. [%c] %s\n",
               i + 1,
               tasks[i].done ? 'X' : ' ',
               tasks[i].text);
    }
}

void markDone() {
    int index;
    viewTasks();

    printf("Enter task number to mark done: ");
    scanf("%d", &index);

    if (index < 1 || index > taskCount) {
        printf("Invalid task number.\n");
        return;
    }

    tasks[index - 1].done = 1;
    printf("Task marked as done.\n");
}

int main() {
    int choice;

    loadTasks();

    while (1) {
        printf("\n--- TO-DO LIST ---\n");
        printf("1. View tasks\n");
        printf("2. Add task\n");
        printf("3. Mark task done\n");
        printf("4. Save & Exit\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewTasks();
                break;
            case 2:
                addTask();
                break;
            case 3:
                markDone();
                break;
            case 4:
                saveTasks();
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
=======
#define MAX_TASK_LEN 256

char tasks[MAX_TASKS][MAX_TASK_LEN];
int task_count = 0;

void add_task(const char* task) {
    if (task_count < MAX_TASKS) {
        strcpy(tasks[task_count++], task);
        printf("Task added.\n");
    } else {
        printf("Task list full.\n");
    }
}

void list_tasks() {
    for (int i = 0; i < task_count; i++) {
        printf("%d: %s\n", i + 1, tasks[i]);
    }
}

void remove_task(int index) {
    if (index > 0 && index <= task_count) {
        for (int i = index - 1; i < task_count - 1; i++) {
            strcpy(tasks[i], tasks[i + 1]);
        }
        task_count--;
        printf("Task removed.\n");
    } else {
        printf("Invalid index.\n");
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: ./todo add \"task\" | list | remove <index>\n");
        return 1;
    }

    if (strcmp(argv[1], "add") == 0 && argc == 3) {
        add_task(argv[2]);
    } else if (strcmp(argv[1], "list") == 0) {
        list_tasks();
    } else if (strcmp(argv[1], "remove") == 0 && argc == 3) {
        remove_task(atoi(argv[2]));
    } else {
        printf("Invalid command.\n");
    }
    return 0;
}
>>>>>>> branch2
