#ifndef _javax_xml_crypto_NodeSetData_h_
#define _javax_xml_crypto_NodeSetData_h_
//$ interface javax.xml.crypto.NodeSetData
//$ extends javax.xml.crypto.Data,java.lang.Iterable

#include <java/lang/Iterable.h>
#include <javax/xml/crypto/Data.h>

namespace javax {
	namespace xml {
		namespace crypto {

class $import NodeSetData : public ::javax::xml::crypto::Data, public ::java::lang::Iterable {
	$interface(NodeSetData, $NO_CLASS_INIT, ::javax::xml::crypto::Data, ::java::lang::Iterable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual $String* toString() override;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_NodeSetData_h_