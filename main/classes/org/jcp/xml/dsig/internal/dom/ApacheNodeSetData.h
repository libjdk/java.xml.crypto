#ifndef _org_jcp_xml_dsig_internal_dom_ApacheNodeSetData_h_
#define _org_jcp_xml_dsig_internal_dom_ApacheNodeSetData_h_
//$ class org.jcp.xml.dsig.internal.dom.ApacheNodeSetData
//$ extends org.jcp.xml.dsig.internal.dom.ApacheData
//$ implements javax.xml.crypto.NodeSetData

#include <javax/xml/crypto/NodeSetData.h>
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
namespace java {
	namespace util {
		class Iterator;
		class List;
		class Set;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class ApacheNodeSetData : public ::org::jcp::xml::dsig::internal::dom::ApacheData, public ::javax::xml::crypto::NodeSetData {
	$class(ApacheNodeSetData, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::ApacheData, ::javax::xml::crypto::NodeSetData)
public:
	ApacheNodeSetData();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xi);
	::java::util::Set* getNodeSet(::java::util::List* nodeFilters);
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getXMLSignatureInput() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual $String* toString() override;
	::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xi = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_ApacheNodeSetData_h_