#ifndef _javax_xml_crypto_dsig_TransformService$MechanismMapEntry_h_
#define _javax_xml_crypto_dsig_TransformService$MechanismMapEntry_h_
//$ class javax.xml.crypto.dsig.TransformService$MechanismMapEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class TransformService$MechanismMapEntry : public ::java::util::Map$Entry {
	$class(TransformService$MechanismMapEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	TransformService$MechanismMapEntry();
	void init$($String* algorithm, $String* mechanism);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $String* setValue($String* value);
	virtual $Object* setValue(Object$* value) override;
	$String* mechanism = nullptr;
	$String* algorithm = nullptr;
	$String* key = nullptr;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_TransformService$MechanismMapEntry_h_