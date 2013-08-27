/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ObjectName_H_
#define	_ObjectName_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Identifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObjectName_PR {
	ObjectName_PR_NOTHING,	/* No components present */
	ObjectName_PR_vmdspecific,
	ObjectName_PR_domainspecific,
	ObjectName_PR_aaspecific
} ObjectName_PR;

struct ObjectName__domainspecific 
{
	Identifier_t	 domainId;
	Identifier_t	 itemId;

	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
};

/* ObjectName */
typedef struct ObjectName 
{
	ObjectName_PR present;
	union ObjectName_u 
	{
		Identifier_t	 vmdspecific;
		struct ObjectName__domainspecific domainspecific;
		Identifier_t	 aaspecific;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ObjectName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ObjectName;

#ifdef __cplusplus
}
#endif

#endif	/* _ObjectName_H_ */
