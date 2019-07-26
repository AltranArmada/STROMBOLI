cmake_minimum_required(VERSION 2.8)   
SET ( CMAKE_CXX_FLAGS "-W -O3 -std=c++11" CACHE STRING "compile flags" FORCE)
set(CMAKE_SOURCE_DIR ./)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/FindXSD.cmake)

set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)  

# Options
option(COVERAGE "Enable code coverage" OFF)

if (COVERAGE)
    add_definitions(--coverage)    
endif()

#--------------------------------------------------------------------------------------------------#
 
project(Stromboli) 

#--------------------------------------------------------------------------------------------------#
set (SRCS  
	./src/Cfg_Flux_IP.cxx
	./src/Cfg_Data.cxx
	./src/Cfg_IP.cxx
	./src/CTest.cpp
)

set (TI_SRCS 
	./test/TI_Stromboli.cpp
)   

include_directories ( 
	./inc  
	../xsd-4.0.0-i686-linux-gnu/libxsd/
)
 
# add_subdirectory(../driver_LAN9250 Build_Driver)  
# add_subdirectory(../Memory_lib Build_Lib) 

# include $(root)/build/cxx/rules.make
# include $(root)/build/xsd/tree-rules.make

# CPPFLAGS="-I ~/xerces-c/include" \
# LDFLAGS="-L ~/xerces-c/lib"`-DCMAKE_TOOLCHAIN_FILE=[project_path]/cmake/Arduino-Toolchain.cmake`

#--------------------------------------------------------------------------------------------------# 
add_executable(TI_Stromboli ${SRCS} ${TI_SRCS})  
target_include_directories (TI_Stromboli PRIVATE
							./test/stub/  )  	
target_link_libraries(TI_Stromboli xerces-c --coverage)	  

set_target_properties(TI_Stromboli PROPERTIES EXCLUDE_FROM_ALL TRUE)    
 
#--------------------------------------------------------------------------------------------------#

add_library(Lib_Stromboli STATIC ${SRCS} )   
target_include_directories (Lib_Stromboli PRIVATE  ) 
target_link_libraries(Lib_Stromboli xerces-c m )    

#--------------------------------------------------------------------------------------------------#

# # add a target to generate API documentation with Doxygen
# find_package(Doxygen)
# if(DOXYGEN_FOUND)
# configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
# add_custom_target(docIcmp
# ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
# WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# COMMENT "Generating API documentation with Doxygen" VERBATIM
# )
# endif(DOXYGEN_FOUND)

#--------------------------------------------------------------------------------------------------# 
