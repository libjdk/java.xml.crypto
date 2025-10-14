#ifndef _com_sun_org_apache_xml_internal_security_utils_DigesterOutputStream_h_
#define _com_sun_org_apache_xml_internal_security_utils_DigesterOutputStream_h_
//$ class com.sun.org.apache.xml.internal.security.utils.DigesterOutputStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								class MessageDigestAlgorithm;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
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

class DigesterOutputStream : public ::java::io::ByteArrayOutputStream {
	$class(DigesterOutputStream, 0, ::java::io::ByteArrayOutputStream)
public:
	DigesterOutputStream();
	void init$(::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm* mda);
	virtual $bytes* getDigestValue();
	virtual void write($bytes* arg0) override;
	virtual void write(int32_t arg0) override;
	virtual void write($bytes* arg0, int32_t arg1, int32_t arg2) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm* mda = nullptr;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_DigesterOutputStream_h_