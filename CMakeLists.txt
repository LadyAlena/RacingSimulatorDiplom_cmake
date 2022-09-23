cmake_minimum_required(VERSION 3.22.0)

project(RacingSimulator)

if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(RacingSimulatorLIB SHARED
"src/RacingSimulator/RacingSimulatorExceptions/racing_simulator_error.h"
"src/RacingSimulator/RacingSimulatorExceptions/racing_simulator_error.cpp"
"src/RacingSimulator/RacingSimulatorExceptions/menu_operation_error.h"
"src/RacingSimulator/RacingSimulatorExceptions/menu_operation_error.cpp"

"src/RacingSimulator/Vehicle/TypeOfVehicle.h"
"src/RacingSimulator/Race/TypeOfRace.h"

"src/RacingSimulator/Vehicle/Vehicle.h"
"src/RacingSimulator/Vehicle/Vehicle.cpp"

"src/RacingSimulator/Vehicle/AirVehicle/AirVehicle.h"
"src/RacingSimulator/Vehicle/AirVehicle/AirVehicle.cpp"
"src/RacingSimulator/Vehicle/AirVehicle/Broomstick/Broomstick.h"
"src/RacingSimulator/Vehicle/AirVehicle/Broomstick/Broomstick.cpp"
"src/RacingSimulator/Vehicle/AirVehicle/Eagle/Eagle.h"
"src/RacingSimulator/Vehicle/AirVehicle/Eagle/Eagle.cpp"
"src/RacingSimulator/Vehicle/AirVehicle/Magicarpet/Magicarpet.h"
"src/RacingSimulator/Vehicle/AirVehicle/Magicarpet/Magicarpet.cpp"

"src/RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"
"src/RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.cpp"
"src/RacingSimulator/Vehicle/GroundVehicle/BootsAllTerrain/BootsAllTerrain.h"
"src/RacingSimulator/Vehicle/GroundVehicle/BootsAllTerrain/BootsAllTerrain.cpp"
"src/RacingSimulator/Vehicle/GroundVehicle/Camel/Camel.h"
"src/RacingSimulator/Vehicle/GroundVehicle/Camel/Camel.cpp"
"src/RacingSimulator/Vehicle/GroundVehicle/Centaur/Centaur.h"
"src/RacingSimulator/Vehicle/GroundVehicle/Centaur/Centaur.cpp"
"src/RacingSimulator/Vehicle/GroundVehicle/FastMovingCamel/FastMovingCamel.h"
"src/RacingSimulator/Vehicle/GroundVehicle/FastMovingCamel/FastMovingCamel.cpp"

"src/RacingSimulator/Race/Race.h"
"src/RacingSimulator/Race/Race.cpp"

"src/RacingSimulator/Race/AirRace/AirRace.h"
"src/RacingSimulator/Race/AirRace/AirRace.cpp"

"src/RacingSimulator/Race/GroundAndAirRace/GroundAndAirRace.h"
"src/RacingSimulator/Race/GroundAndAirRace/GroundAndAirRace.cpp"

"src/RacingSimulator/Race/GroundRace/GroundRace.h"
"src/RacingSimulator/Race/GroundRace/GroundRace.cpp"

"src/RacingSimulator/Reception/Reception.h"
"src/RacingSimulator/Reception/Reception.cpp"

"src/RacingSimulator/Vehicle/Vehicles.h"
"src/RacingSimulator/Race/Races.h")

add_library (ConvertDataLIB SHARED
"src/ConvertData/ConvertData.h"
"src/ConvertData/ConvertData.cpp")

add_executable(RacingSimulator "src/Source.cpp")

target_link_libraries(RacingSimulator 
PRIVATE RacingSimulatorLIB 
PRIVATE ConvertDataLIB)