#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.crypto.dom_SRCS)
file(GLOB classes.javax.xml.crypto.dom_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.crypto.dom_HEADERS}) 
list(LENGTH classes.javax.xml.crypto.dom_SRCS classes.javax.xml.crypto.dom_SRCS_LENGTH)
if(classes.javax.xml.crypto.dom_SRCS_LENGTH)
	add_library(classes.javax.xml.crypto.dom OBJECT "${classes.javax.xml.crypto.dom_SRCS}" "${classes.javax.xml.crypto.dom_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.crypto.dom)
endif()