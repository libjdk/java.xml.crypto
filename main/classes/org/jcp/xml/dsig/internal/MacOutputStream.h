#ifndef _org_jcp_xml_dsig_internal_MacOutputStream_h_
#define _org_jcp_xml_dsig_internal_MacOutputStream_h_
//$ class org.jcp.xml.dsig.internal.MacOutputStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace javax {
	namespace crypto {
		class Mac;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

class MacOutputStream : public ::java::io::ByteArrayOutputStream {
	$class(MacOutputStream, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	MacOutputStream();
	void init$(::javax::crypto::Mac* mac);
	using ::java::io::ByteArrayOutputStream::write;
	virtual void write(int32_t arg0) override;
	virtual void write($bytes* arg0, int32_t arg1, int32_t arg2) override;
	::javax::crypto::Mac* mac = nullptr;
};

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_MacOutputStream_h_