#include "../include/task.h"

Task::Task(std::string name,
  std::chrono::system_clock::time_point end,
  std::chrono::system_clock::time_point start,
  Task* parent) {
  this->name = name;
  this->end = end;
  this->start = start;
  this->parent = parent;
  this->complete = false;
}

std::string Task::GetName() {
  return this->name;
}

int Task::CountSubtasks() {
  return this->subtasks.size();
}

Task* Task::GetParent() {
  return this->parent;
}

void Task::MarkComplete() {
  this->complete = true;
}

