#!/bin/bash

TODO_FILE="tasks.txt"

add_task() {
    echo "$1" >> "$TODO_FILE"
    echo "Task added."
}

list_tasks() {
    if [ -f "$TODO_FILE" ]; then
        nl "$TODO_FILE"
    else
        echo "No tasks."
    fi
}

remove_task() {
    if [ -f "$TODO_FILE" ]; then
        sed -i "${1}d" "$TODO_FILE"
        echo "Task removed."
    else
        echo "No tasks."
    fi
}

case "$1" in
    add)
        add_task "$2"
        ;;
    list)
        list_tasks
        ;;
    remove)
        remove_task "$2"
        ;;
    *)
        echo "Usage: $0 add \"task\" | list | remove <index>"
        ;;
esac
