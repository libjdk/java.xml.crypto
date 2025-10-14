#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.jcp.xml.dsig.in_30_SRCS)
file(GLOB classes.org.jcp.xml.dsig.in_30_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.jcp.xml.dsig.in_30_HEADERS}) 
list(LENGTH classes.org.jcp.xml.dsig.in_30_SRCS classes.org.jcp.xml.dsig.in_30_SRCS_LENGTH)
if(classes.org.jcp.xml.dsig.in_30_SRCS_LENGTH)
	add_library(classes.org.jcp.xml.dsig.in_30 OBJECT "${classes.org.jcp.xml.dsig.in_30_SRCS}" "${classes.org.jcp.xml.dsig.in_30_HEADERS}")
	jcpp_enable_bigobj(classes.org.jcp.xml.dsig.in_30)
endif()