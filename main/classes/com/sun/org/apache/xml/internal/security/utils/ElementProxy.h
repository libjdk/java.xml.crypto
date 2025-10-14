#ifndef _com_sun_org_apache_xml_internal_security_utils_ElementProxy_h_
#define _com_sun_org_apache_xml_internal_security_utils_ElementProxy_h_
//$ class com.sun.org.apache.xml.internal.security.utils.ElementProxy
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
			class NodeList;
			class Text;
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
							namespace utils {

class ElementProxy : public ::java::lang::Object {
	$class(ElementProxy, 0, ::java::lang::Object)
public:
	ElementProxy();
	void init$();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual void addBase64Element($bytes* bytes, $String* localname);
	virtual void addBase64Text($bytes* bytes);
	virtual void addBigIntegerElement(::java::math::BigInteger* bi, $String* localname);
	virtual void addReturnToSelf();
	virtual void addText($String* text);
	virtual void addTextElement($String* text, $String* localname);
	virtual void appendOther(::org::w3c::dom::Element* parent, ::org::w3c::dom::Node* toAppend);
	virtual void appendSelf(::com::sun::org::apache::xml::internal::security::utils::ElementProxy* toAppend);
	virtual void appendSelf(::org::w3c::dom::Node* toAppend);
	static ::org::w3c::dom::Element* createElementForFamily(::org::w3c::dom::Document* doc, $String* namespace$, $String* localName);
	virtual ::org::w3c::dom::Element* createElementForFamilyLocal($String* namespace$, $String* localName);
	virtual ::org::w3c::dom::Text* createText($String* text);
	virtual $String* getBaseLocalName() {return nullptr;}
	virtual $String* getBaseNamespace() {return nullptr;}
	virtual $String* getBaseURI();
	virtual ::java::math::BigInteger* getBigIntegerFromChildElement($String* localname, $String* namespace$);
	virtual $bytes* getBytesFromTextChild();
	static $String* getDefaultPrefix($String* namespace$);
	virtual ::org::w3c::dom::Document* getDocument();
	::org::w3c::dom::Element* getElement();
	::org::w3c::dom::NodeList* getElementPlusReturns();
	virtual ::org::w3c::dom::Node* getFirstChild();
	virtual $String* getLocalAttribute($String* attrName);
	virtual $String* getTextFromChildElement($String* localname, $String* namespace$);
	virtual $String* getTextFromTextChild();
	virtual void guaranteeThatElementInCorrectSpace();
	virtual int32_t length($String* namespace$, $String* localname);
	static void registerDefaultPrefixes();
	static void setDefaultPrefix($String* namespace$, $String* prefix);
	virtual void setDocument(::org::w3c::dom::Document* doc);
	virtual void setElement(::org::w3c::dom::Element* element, $String* baseURI);
	virtual void setElement(::org::w3c::dom::Element* elem);
	virtual void setLocalAttribute($String* attrName, $String* value);
	virtual void setLocalIdAttribute($String* attrName, $String* value);
	static void setNamespacePrefix($String* namespace$, $String* prefix);
	virtual void setXPathNamespaceContext($String* prefix, $String* uri);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::org::w3c::dom::Element* wrappedElement = nullptr;
	$String* baseURI = nullptr;
	::org::w3c::dom::Document* wrappedDoc = nullptr;
	static ::java::util::Map* prefixMappings;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_ElementProxy_h_