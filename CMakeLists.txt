cmake_minimum_required(VERSION 3.22.0)

project(RacingSimulator)

if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(RacingSimulatorLIB SHARED
"source/racing_simulator_error.h"
"source/racing_simulator_error.cpp"
"source/menu_operation_error.h"
"source/menu_operation_error.cpp"

"source/TypeOfVehicle.h"
"source/TypeOfRace.h"

"source/Vehicle.h"
"source/Vehicle.cpp"

"source/AirVehicle.h"
"source/AirVehicle.cpp"
"source/Broomstick.h"
"source/Broomstick.cpp"
"source/Eagle.h"
"source/Eagle.cpp"
"source/Magicarpet.h"
"source/Magicarpet.cpp"

"source/GroundVehicle.h"
"source/GroundVehicle.cpp"
"source/BootsAllTerrain.h"
"source/BootsAllTerrain.cpp"
"source/Camel.h"
"source/Camel.cpp"
"source/Centaur.h"
"source/Centaur.cpp"
"source/FastMovingCamel.h"
"source/FastMovingCamel.cpp"

"source/Race.h"
"source/Race.cpp"

"source/AirRace.h"
"source/AirRace.cpp"

"source/GroundAndAirRace.h"
"source/GroundAndAirRace.cpp"

"source/GroundRace.h"
"source/GroundRace.cpp"

"source/Reception.h"
"source/Reception.cpp"

"source/Vehicles.h"
"source/Races.h")

add_library (ConvertDataLIB SHARED
"source/ConvertData.h"
"source/ConvertData.cpp")

add_executable(RacingSimulator "source/Source.cpp")

target_link_libraries(RacingSimulator RacingSimulatorLIB ConvertDataLIB)