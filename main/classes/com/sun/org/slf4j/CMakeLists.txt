#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.slf4j_SRCS)
file(GLOB classes.com.sun.org.slf4j_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.slf4j_HEADERS}) 
list(LENGTH classes.com.sun.org.slf4j_SRCS classes.com.sun.org.slf4j_SRCS_LENGTH)
if(classes.com.sun.org.slf4j_SRCS_LENGTH)
	add_library(classes.com.sun.org.slf4j OBJECT "${classes.com.sun.org.slf4j_SRCS}" "${classes.com.sun.org.slf4j_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.slf4j)
endif()