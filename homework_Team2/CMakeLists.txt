# CMakeList.txt : CMake project for homework_Team2, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (homework_Team2 "homework_Team2.cpp" "homework_Team2.h""Publication.h""Publication.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET homework_Team2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
