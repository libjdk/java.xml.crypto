#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyInfoFactory_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyInfoFactory_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory
//$ extends javax.xml.crypto.dsig.keyinfo.KeyInfoFactory

#include <java/lang/Array.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfoFactory.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class URIDereferencer;
			class XMLStructure;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {
					class KeyInfo;
					class KeyName;
					class KeyValue;
					class PGPData;
					class RetrievalMethod;
					class X509Data;
					class X509IssuerSerial;
				}
			}
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMKeyInfoFactory : public ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory {
	$class(DOMKeyInfoFactory, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory)
public:
	DOMKeyInfoFactory();
	void init$();
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* newKeyInfo(::java::util::List* content) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* newKeyInfo(::java::util::List* content, $String* id) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyName* newKeyName($String* name) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyValue* newKeyValue(::java::security::PublicKey* key) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::PGPData* newPGPData($bytes* keyId) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::PGPData* newPGPData($bytes* keyId, $bytes* keyPacket, ::java::util::List* other) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::PGPData* newPGPData($bytes* keyPacket, ::java::util::List* other) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod* newRetrievalMethod($String* uri) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod* newRetrievalMethod($String* uri, $String* type, ::java::util::List* transforms) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::X509Data* newX509Data(::java::util::List* content) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial* newX509IssuerSerial($String* issuerName, ::java::math::BigInteger* serialNumber) override;
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* unmarshalKeyInfo(::javax::xml::crypto::XMLStructure* xmlStructure) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyInfoFactory_h_