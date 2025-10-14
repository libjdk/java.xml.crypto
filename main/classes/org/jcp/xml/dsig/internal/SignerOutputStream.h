#ifndef _org_jcp_xml_dsig_internal_SignerOutputStream_h_
#define _org_jcp_xml_dsig_internal_SignerOutputStream_h_
//$ class org.jcp.xml.dsig.internal.SignerOutputStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {
		class Signature;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

class SignerOutputStream : public ::java::io::ByteArrayOutputStream {
	$class(SignerOutputStream, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	SignerOutputStream();
	void init$(::java::security::Signature* sig);
	using ::java::io::ByteArrayOutputStream::write;
	virtual void write(int32_t arg0) override;
	virtual void write($bytes* arg0, int32_t arg1, int32_t arg2) override;
	::java::security::Signature* sig = nullptr;
};

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_SignerOutputStream_h_