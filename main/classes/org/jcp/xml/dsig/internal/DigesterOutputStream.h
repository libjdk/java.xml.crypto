#ifndef _org_jcp_xml_dsig_internal_DigesterOutputStream_h_
#define _org_jcp_xml_dsig_internal_DigesterOutputStream_h_
//$ class org.jcp.xml.dsig.internal.DigesterOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
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
							namespace utils {
								class UnsyncByteArrayOutputStream;
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
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

class DigesterOutputStream : public ::java::io::OutputStream {
	$class(DigesterOutputStream, 0, ::java::io::OutputStream)
public:
	DigesterOutputStream();
	void init$(::java::security::MessageDigest* md);
	void init$(::java::security::MessageDigest* md, bool buffer);
	virtual void close() override;
	virtual $bytes* getDigestValue();
	virtual ::java::io::InputStream* getInputStream();
	using ::java::io::OutputStream::write;
	virtual void write(int32_t input) override;
	virtual void write($bytes* input, int32_t offset, int32_t len) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	bool buffer = false;
	::com::sun::org::apache::xml::internal::security::utils::UnsyncByteArrayOutputStream* bos = nullptr;
	::java::security::MessageDigest* md = nullptr;
};

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("LOG")

#endif // _org_jcp_xml_dsig_internal_DigesterOutputStream_h_