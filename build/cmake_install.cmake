# Install script for directory: C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/Coursework_1")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/build/Debug/Coursework_1.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/build/Release/Coursework_1.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/build/MinSizeRel/Coursework_1.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/build/RelWithDebInfo/Coursework_1.exe")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
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
file(WRITE "C:/Users/Bluh1/OneDrive/Desktop/University Work/Year 2/Advanced OOP/LabBook1v4/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
