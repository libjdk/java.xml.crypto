#ifndef _javax_xml_crypto_URIReferenceException_h_
#define _javax_xml_crypto_URIReferenceException_h_
//$ class javax.xml.crypto.URIReferenceException
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
			class URIReference;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class $export URIReferenceException : public ::java::lang::Exception {
	$class(URIReferenceException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	URIReferenceException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($String* message, $Throwable* cause, ::javax::xml::crypto::URIReference* uriReference);
	void init$($Throwable* cause);
	virtual $Throwable* getCause() override;
	virtual ::javax::xml::crypto::URIReference* getURIReference();
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	static const int64_t serialVersionUID = (int64_t)0x638D48B065ED480B;
	$Throwable* cause = nullptr;
	::javax::xml::crypto::URIReference* uriReference = nullptr;
	URIReferenceException(const URIReferenceException& e);
	URIReferenceException wrapper$();
	virtual void throwWrapper$() override;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_URIReferenceException_h_