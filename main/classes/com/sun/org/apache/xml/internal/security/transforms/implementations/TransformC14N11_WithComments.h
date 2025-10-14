#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14N11_WithComments_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14N11_WithComments_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N11_WithComments
//$ extends com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N

#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {
									class Canonicalizer20010315;
								}
							}
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

class TransformC14N11_WithComments : public ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N {
	$class(TransformC14N11_WithComments, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N)
public:
	TransformC14N11_WithComments();
	void init$();
	virtual $String* engineGetURI() override;
	virtual ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315* getCanonicalizer() override;
};

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14N11_WithComments_h_