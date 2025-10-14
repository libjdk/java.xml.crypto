#ifndef _org_jcp_xml_dsig_internal_dom_ApacheOctetStreamData_h_
#define _org_jcp_xml_dsig_internal_dom_ApacheOctetStreamData_h_
//$ class org.jcp.xml.dsig.internal.dom.ApacheOctetStreamData
//$ extends javax.xml.crypto.OctetStreamData
//$ implements org.jcp.xml.dsig.internal.dom.ApacheData

#include <javax/xml/crypto/OctetStreamData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class XMLSignatureInput;
							}
						}
					}
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

class ApacheOctetStreamData : public ::javax::xml::crypto::OctetStreamData, public ::org::jcp::xml::dsig::internal::dom::ApacheData {
	$class(ApacheOctetStreamData, $NO_CLASS_INIT, ::javax::xml::crypto::OctetStreamData, ::org::jcp::xml::dsig::internal::dom::ApacheData)
public:
	ApacheOctetStreamData();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xi);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getXMLSignatureInput() override;
	virtual $String* toString() override;
	::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xi = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_ApacheOctetStreamData_h_