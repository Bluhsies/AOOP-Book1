cmake_minimum_required(VERSION "3.14.0")

project("Coursework_1")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)
add_executable("${PROJECT_NAME}" "Source.cpp" "Bike.h" "Car.h" "CommercialTruck.h" "GameObject.h" "Truck.h" "UtilityTruck.h" "Vehicle.h" "Bike.cpp" "Car.cpp" "CommercialTruck.cpp" "GameObject.cpp" "Truck.cpp" "UtilityTruck.cpp" "Vehicle.cpp")

set(SFML_DIR "SFML-2.5.1/lib/cmake/SFML")

#look for SFML and add it
find_package (SFML REQUIRED system window graphics network audio)

target_link_libraries("${PROJECT_NAME}" PRIVATE sfml-audio sfml-graphics sfml-network sfml-system)

#include_directories(${SFML_INCLUDE_DIR})

install(TARGETS Coursework_1 DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "Source.cpp" "Bike.cpp" "Car.cpp" "CommercialTruck.cpp" "GameObject.cpp" "Truck.cpp" "UtilityTruck.cpp" "Vehicle.cpp" DESTINATION src)
install(FILES "Bike.h" "Car.h" "CommercialTruck.h" "GameObject.h" "Truck.h" "UtilityTruck.h" "Vehicle.h" DESTINATION include)

# Group into "Source Files" and "Header Files"
    if ("${FILE}" MATCHES ".*\\.cpp")
      set(GROUP "src${GROUP}")
    elseif("${FILE}" MATCHES ".*\\.h")
      set(GROUP "include${GROUP}")
    endif()

	
set(CMAKE_SUPPRESS_REGENERATION true)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

