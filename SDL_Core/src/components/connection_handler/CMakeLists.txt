include_directories (
  ./include/
  ../transport_manager/include/
  ../protocol_handler/include/
  ../utils/include/
)

set (SOURCES
    ./src/connection_handler_impl.cc
    ./src/connection.cc
    ./src/device.cc
)

add_library("connectionHandler" ${SOURCES})
target_link_libraries ("connectionHandler" log4cxx)
