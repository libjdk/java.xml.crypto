#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_FuncHere_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_FuncHere_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.FuncHere
//$ extends com.sun.org.apache.xpath.internal.functions.Function

#include <com/sun/org/apache/xpath/internal/functions/Function.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class XPathContext;
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
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class FuncHere : public ::com::sun::org::apache::xpath::internal::functions::Function {
	$class(FuncHere, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function)
public:
	FuncHere();
	using ::com::sun::org::apache::xpath::internal::functions::Function::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	static const int64_t serialVersionUID = (int64_t)1;
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

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_FuncHere_h_