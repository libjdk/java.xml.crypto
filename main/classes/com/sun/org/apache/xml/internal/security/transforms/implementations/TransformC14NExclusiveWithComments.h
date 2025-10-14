#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14NExclusiveWithComments_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14NExclusiveWithComments_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusiveWithComments
//$ extends com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusive

#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusive.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {
									class Canonicalizer20010315Excl;
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

class TransformC14NExclusiveWithComments : public ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusive {
	$class(TransformC14NExclusiveWithComments, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusive)
public:
	TransformC14NExclusiveWithComments();
	void init$();
	virtual $String* engineGetURI() override;
	virtual ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl* getCanonicalizer() override;
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

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformC14NExclusiveWithComments_h_