#pragma once 
#include <chrono>
#include <string>
#include <vector>

class Task {
public:

  // Constructor
  Task(std::string name,
    std::chrono::system_clock::time_point end,
    std::chrono::system_clock::time_point start = std::chrono::system_clock::now(),
    Task* parent = nullptr);

  std::string GetName();
  int CountSubtasks();
  Task* GetParent();
  void MarkComplete();

private:
  std::string name = "";
  std::string description = "";
  Task* parent;
  std::chrono::system_clock::time_point start;
  std::chrono::system_clock::time_point end;
  bool complete;
  std::vector<Task*> subtasks;
};
