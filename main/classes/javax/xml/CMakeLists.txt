#machine generated

add_subdirectory("crypto")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml_SRCS)
file(GLOB classes.javax.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml_HEADERS}) 
list(LENGTH classes.javax.xml_SRCS classes.javax.xml_SRCS_LENGTH)
if(classes.javax.xml_SRCS_LENGTH)
	add_library(classes.javax.xml OBJECT "${classes.javax.xml_SRCS}" "${classes.javax.xml_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml)
endif()