#ifndef _javax_xml_crypto_dsig_TransformService_h_
#define _javax_xml_crypto_dsig_TransformService_h_
//$ class javax.xml.crypto.dsig.TransformService
//$ extends javax.xml.crypto.dsig.Transform

#include <javax/xml/crypto/dsig/Transform.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class XMLCryptoContext;
			class XMLStructure;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {
					class TransformParameterSpec;
				}
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $import TransformService : public ::javax::xml::crypto::dsig::Transform {
	$class(TransformService, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::Transform)
public:
	TransformService();
	void init$();
	virtual $String* getAlgorithm() override;
	static ::javax::xml::crypto::dsig::TransformService* getInstance($String* algorithm, $String* mechanismType);
	static ::javax::xml::crypto::dsig::TransformService* getInstance($String* algorithm, $String* mechanismType, ::java::security::Provider* provider);
	static ::javax::xml::crypto::dsig::TransformService* getInstance($String* algorithm, $String* mechanismType, $String* provider);
	$String* getMechanismType();
	::java::security::Provider* getProvider();
	virtual void init(::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) {}
	virtual void init(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) {}
	virtual void marshalParams(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) {}
	$String* algorithm = nullptr;
	$String* mechanism = nullptr;
	::java::security::Provider* provider = nullptr;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_TransformService_h_