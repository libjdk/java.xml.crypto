#ifndef _javax_xml_crypto_dsig_TransformException_h_
#define _javax_xml_crypto_dsig_TransformException_h_
//$ class javax.xml.crypto.dsig.TransformException
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

class $import TransformException : public ::java::lang::Exception {
	$class(TransformException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TransformException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	virtual $Throwable* getCause() override;
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	static const int64_t serialVersionUID = (int64_t)0x4689256C42205B18;
	$Throwable* cause = nullptr;
	TransformException(const TransformException& e);
	TransformException wrapper$();
	virtual void throwWrapper$() override;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_TransformException_h_