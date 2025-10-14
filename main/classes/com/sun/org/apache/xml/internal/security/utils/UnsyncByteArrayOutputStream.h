#ifndef _com_sun_org_apache_xml_internal_security_utils_UnsyncByteArrayOutputStream_h_
#define _com_sun_org_apache_xml_internal_security_utils_UnsyncByteArrayOutputStream_h_
//$ class com.sun.org.apache.xml.internal.security.utils.UnsyncByteArrayOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("VM_ARRAY_INDEX_MAX_VALUE")
#undef VM_ARRAY_INDEX_MAX_VALUE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class UnsyncByteArrayOutputStream : public ::java::io::OutputStream {
	$class(UnsyncByteArrayOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	UnsyncByteArrayOutputStream();
	void init$();
	void expandSize(int32_t newPos);
	virtual void reset();
	virtual $bytes* toByteArray();
	virtual void write($bytes* arg0) override;
	virtual void write($bytes* arg0, int32_t arg1, int32_t arg2) override;
	virtual void write(int32_t arg0) override;
	virtual void writeTo(::java::io::OutputStream* out);
	static const int32_t VM_ARRAY_INDEX_MAX_VALUE = 0x7FFFFFF7; // ::java::lang::Integer::MAX_VALUE - 8
	static const int32_t INITIAL_SIZE = 8192;
	$bytes* buf = nullptr;
	int32_t size = 0;
	int32_t pos = 0;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INITIAL_SIZE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("VM_ARRAY_INDEX_MAX_VALUE")

#endif // _com_sun_org_apache_xml_internal_security_utils_UnsyncByteArrayOutputStream_h_