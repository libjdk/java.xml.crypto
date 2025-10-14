#ifndef _javax_xml_crypto_AlgorithmMethod_h_
#define _javax_xml_crypto_AlgorithmMethod_h_
//$ interface javax.xml.crypto.AlgorithmMethod
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class $export AlgorithmMethod : public ::java::lang::Object {
	$interface(AlgorithmMethod, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getAlgorithm() {return nullptr;}
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() {return nullptr;}
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_AlgorithmMethod_h_