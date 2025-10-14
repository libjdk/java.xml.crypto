#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.crypto.ds_26_SRCS)
file(GLOB classes.javax.xml.crypto.ds_26_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.crypto.ds_26_HEADERS}) 
list(LENGTH classes.javax.xml.crypto.ds_26_SRCS classes.javax.xml.crypto.ds_26_SRCS_LENGTH)
if(classes.javax.xml.crypto.ds_26_SRCS_LENGTH)
	add_library(classes.javax.xml.crypto.ds_26 OBJECT "${classes.javax.xml.crypto.ds_26_SRCS}" "${classes.javax.xml.crypto.ds_26_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.crypto.ds_26)
endif()