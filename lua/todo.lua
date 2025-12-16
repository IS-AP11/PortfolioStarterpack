local tasks = {}

local function add_task(task)
    table.insert(tasks, task)
    print("Task added.")
end

local function list_tasks()
    for i, task in ipairs(tasks) do
        print(i .. ": " .. task)
    end
end

local function remove_task(index)
    if index >= 1 and index <= #tasks then
        table.remove(tasks, index)
        print("Task removed.")
    else
        print("Invalid index.")
    end
end

if #arg < 1 then
    print("Usage: lua todo.lua add \"task\" | list | remove <index>")
    os.exit(1)
end

local command = arg[1]
if command == "add" and #arg == 2 then
    add_task(arg[2])
elseif command == "list" then
    list_tasks()
elseif command == "remove" and #arg == 2 then
    remove_task(tonumber(arg[2]))
else
    print("Invalid command.")
end
