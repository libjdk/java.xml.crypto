#ifndef _javax_xml_crypto_dsig_keyinfo_KeyInfoFactory_h_
#define _javax_xml_crypto_dsig_keyinfo_KeyInfoFactory_h_
//$ class javax.xml.crypto.dsig.keyinfo.KeyInfoFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Provider;
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

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $import KeyInfoFactory : public ::java::lang::Object {
	$class(KeyInfoFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyInfoFactory();
	void init$();
	static ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory* getInstance($String* mechanismType);
	static ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory* getInstance($String* mechanismType, ::java::security::Provider* provider);
	static ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory* getInstance($String* mechanismType, $String* provider);
	static ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory* getInstance();
	$String* getMechanismType();
	::java::security::Provider* getProvider();
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() {return nullptr;}
	virtual bool isFeatureSupported($String* feature) {return false;}
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* newKeyInfo(::java::util::List* content) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* newKeyInfo(::java::util::List* content, $String* id) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyName* newKeyName($String* name) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyValue* newKeyValue(::java::security::PublicKey* key) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::PGPData* newPGPData($bytes* keyId) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::PGPData* newPGPData($bytes* keyId, $bytes* keyPacket, ::java::util::List* other) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::PGPData* newPGPData($bytes* keyPacket, ::java::util::List* other) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod* newRetrievalMethod($String* uri) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod* newRetrievalMethod($String* uri, $String* type, ::java::util::List* transforms) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::X509Data* newX509Data(::java::util::List* content) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial* newX509IssuerSerial($String* issuerName, ::java::math::BigInteger* serialNumber) {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* unmarshalKeyInfo(::javax::xml::crypto::XMLStructure* xmlStructure) {return nullptr;}
	$String* mechanismType = nullptr;
	::java::security::Provider* provider = nullptr;
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_keyinfo_KeyInfoFactory_h_