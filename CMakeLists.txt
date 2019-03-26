add_executable(keither
  src/keither.cpp
)

target_link_libraries(keither
  neither
)

add_subdirectory(third-party)
