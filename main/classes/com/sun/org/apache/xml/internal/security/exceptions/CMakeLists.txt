#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache.x_7_SRCS)
file(GLOB classes.com.sun.org.apache.x_7_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache.x_7_HEADERS}) 
list(LENGTH classes.com.sun.org.apache.x_7_SRCS classes.com.sun.org.apache.x_7_SRCS_LENGTH)
if(classes.com.sun.org.apache.x_7_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache.x_7 OBJECT "${classes.com.sun.org.apache.x_7_SRCS}" "${classes.com.sun.org.apache.x_7_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache.x_7)
endif()