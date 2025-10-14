#ifndef _com_sun_org_apache_xml_internal_security_utils_UnsyncBufferedOutputStream_h_
#define _com_sun_org_apache_xml_internal_security_utils_UnsyncBufferedOutputStream_h_
//$ class com.sun.org.apache.xml.internal.security.utils.UnsyncBufferedOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class UnsyncBufferedOutputStream : public ::java::io::FilterOutputStream {
	$class(UnsyncBufferedOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	UnsyncBufferedOutputStream();
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, int32_t size);
	virtual void flush() override;
	void flushInternal();
	using ::java::io::FilterOutputStream::write;
	virtual void write($bytes* bytes, int32_t offset, int32_t length) override;
	virtual void write(int32_t oneByte) override;
	$bytes* buffer = nullptr;
	int32_t count = 0;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_UnsyncBufferedOutputStream_h_