#ifndef _javax_xml_crypto_KeySelectorException_h_
#define _javax_xml_crypto_KeySelectorException_h_
//$ class javax.xml.crypto.KeySelectorException
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

class $import KeySelectorException : public ::java::lang::Exception {
	$class(KeySelectorException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	KeySelectorException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	virtual $Throwable* getCause() override;
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	static const int64_t serialVersionUID = (int64_t)0x9831950934354ADB;
	$Throwable* cause = nullptr;
	KeySelectorException(const KeySelectorException& e);
	KeySelectorException wrapper$();
	virtual void throwWrapper$() override;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_KeySelectorException_h_