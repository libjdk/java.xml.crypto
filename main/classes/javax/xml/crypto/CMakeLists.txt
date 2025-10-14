#machine generated

add_subdirectory("dom")
add_subdirectory("dsig")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.crypto_SRCS)
file(GLOB classes.javax.xml.crypto_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.crypto_HEADERS}) 
list(LENGTH classes.javax.xml.crypto_SRCS classes.javax.xml.crypto_SRCS_LENGTH)
if(classes.javax.xml.crypto_SRCS_LENGTH)
	add_library(classes.javax.xml.crypto OBJECT "${classes.javax.xml.crypto_SRCS}" "${classes.javax.xml.crypto_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.crypto)
endif()