#ifndef _javax_xml_crypto_NoSuchMechanismException_h_
#define _javax_xml_crypto_NoSuchMechanismException_h_
//$ class javax.xml.crypto.NoSuchMechanismException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

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

class $import NoSuchMechanismException : public ::java::lang::RuntimeException {
	$class(NoSuchMechanismException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	NoSuchMechanismException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	virtual $Throwable* getCause() override;
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	static const int64_t serialVersionUID = (int64_t)0x3A24B1D22A335746;
	$Throwable* cause = nullptr;
	NoSuchMechanismException(const NoSuchMechanismException& e);
	NoSuchMechanismException wrapper$();
	virtual void throwWrapper$() override;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_NoSuchMechanismException_h_