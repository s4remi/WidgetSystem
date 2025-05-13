cmake_minimum_required(VERSION 3.30)
project(deleteMe)

set(CMAKE_CXX_STANDARD 17)

add_executable(deleteMe main.cpp Rectangle.cpp Person.cpp Note.cpp Widget.cpp Reminder.cpp Metadata.cpp
)
