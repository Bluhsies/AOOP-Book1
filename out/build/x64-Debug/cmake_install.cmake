# Install script for directory: C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/out/build/x64-Debug/Coursework_1.exe")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/src" TYPE FILE FILES
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Source.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Bike.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Car.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/CommercialTruck.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/GameObject.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Truck.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/UtilityTruck.cpp"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Vehicle.cpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Bike.h"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Car.h"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/CommercialTruck.h"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/GameObject.h"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Truck.h"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/UtilityTruck.h"
    "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/Vehicle.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/out/build/x64-Debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
