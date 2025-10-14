#ifndef _javax_xml_crypto_dsig_XMLSignatureException_h_
#define _javax_xml_crypto_dsig_XMLSignatureException_h_
//$ class javax.xml.crypto.dsig.XMLSignatureException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $import XMLSignatureException : public ::java::lang::Exception {
	$class(XMLSignatureException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XMLSignatureException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	virtual $Throwable* getCause() override;
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	static const int64_t serialVersionUID = (int64_t)0xD049680011BB8E55;
	$Throwable* cause = nullptr;
	XMLSignatureException(const XMLSignatureException& e);
	XMLSignatureException wrapper$();
	virtual void throwWrapper$() override;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_XMLSignatureException_h_