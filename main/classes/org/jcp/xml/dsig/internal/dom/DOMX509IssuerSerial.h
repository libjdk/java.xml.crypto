#ifndef _org_jcp_xml_dsig_internal_dom_DOMX509IssuerSerial_h_
#define _org_jcp_xml_dsig_internal_dom_DOMX509IssuerSerial_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMX509IssuerSerial
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.X509IssuerSerial

#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {
				class DOMCryptoContext;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
			class Node;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMX509IssuerSerial : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial {
	$class(DOMX509IssuerSerial, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial)
public:
	DOMX509IssuerSerial();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* issuerName, ::java::math::BigInteger* serialNumber);
	void init$(::org::w3c::dom::Element* isElem);
	virtual bool equals(Object$* obj) override;
	virtual $String* getIssuerName() override;
	virtual ::java::math::BigInteger* getSerialNumber() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	$String* issuerName = nullptr;
	::java::math::BigInteger* serialNumber = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMX509IssuerSerial_h_