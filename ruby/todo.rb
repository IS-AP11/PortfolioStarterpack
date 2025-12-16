tasks = []

def add_task(task)
  tasks << task
  puts "Task added."
end

def list_tasks
  tasks.each_with_index { |task, i| puts "#{i + 1}: #{task}" }
end

def remove_task(index)
  if index.between?(1, tasks.size)
    tasks.delete_at(index - 1)
    puts "Task removed."
  else
    puts "Invalid index."
  end
end

if ARGV.empty?
  puts "Usage: ruby todo.rb add \"task\" | list | remove <index>"
  exit 1
end

command = ARGV[0]
case command
when "add"
  add_task(ARGV[1]) if ARGV.size == 2
when "list"
  list_tasks
when "remove"
  remove_task(ARGV[1].to_i) if ARGV.size == 2
else
  puts "Invalid command."
end
