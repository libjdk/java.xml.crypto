#ifndef _org_jcp_xml_dsig_internal_dom_ApacheData_h_
#define _org_jcp_xml_dsig_internal_dom_ApacheData_h_
//$ interface org.jcp.xml.dsig.internal.dom.ApacheData
//$ extends javax.xml.crypto.Data

#include <javax/xml/crypto/Data.h>

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

class ApacheData : public ::javax::xml::crypto::Data {
	$interface(ApacheData, $NO_CLASS_INIT, ::javax::xml::crypto::Data)
public:
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* getXMLSignatureInput() {return nullptr;}
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_ApacheData_h_