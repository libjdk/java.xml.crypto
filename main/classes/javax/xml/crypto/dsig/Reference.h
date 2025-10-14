#ifndef _javax_xml_crypto_dsig_Reference_h_
#define _javax_xml_crypto_dsig_Reference_h_
//$ interface javax.xml.crypto.dsig.Reference
//$ extends javax.xml.crypto.URIReference,javax.xml.crypto.XMLStructure

#include <java/lang/Array.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/XMLStructure.h>

namespace java {
	namespace io {
		class InputStream;
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
			class Data;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class DigestMethod;
				class XMLValidateContext;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $export Reference : public ::javax::xml::crypto::URIReference, public ::javax::xml::crypto::XMLStructure {
	$interface(Reference, $NO_CLASS_INIT, ::javax::xml::crypto::URIReference, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $bytes* getCalculatedDigestValue() {return nullptr;}
	virtual ::javax::xml::crypto::Data* getDereferencedData() {return nullptr;}
	virtual ::java::io::InputStream* getDigestInputStream() {return nullptr;}
	virtual ::javax::xml::crypto::dsig::DigestMethod* getDigestMethod() {return nullptr;}
	virtual $bytes* getDigestValue() {return nullptr;}
	virtual $String* getId() {return nullptr;}
	virtual ::java::util::List* getTransforms() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual bool validate(::javax::xml::crypto::dsig::XMLValidateContext* validateContext) {return false;}
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_Reference_h_