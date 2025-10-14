#machine generated

add_subdirectory("dsig")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.jcp.xml_SRCS)
file(GLOB classes.org.jcp.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.jcp.xml_HEADERS}) 
list(LENGTH classes.org.jcp.xml_SRCS classes.org.jcp.xml_SRCS_LENGTH)
if(classes.org.jcp.xml_SRCS_LENGTH)
	add_library(classes.org.jcp.xml OBJECT "${classes.org.jcp.xml_SRCS}" "${classes.org.jcp.xml_HEADERS}")
	jcpp_enable_bigobj(classes.org.jcp.xml)
endif()