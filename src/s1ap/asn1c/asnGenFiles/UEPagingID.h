/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "./asn1c/S1AP-IEs.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -gen-PER -findirect-choice -pdu=S1AP-PDU`
 */

#ifndef	_UEPagingID_H_
#define	_UEPagingID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingID_PR {
	UEPagingID_PR_NOTHING,	/* No components present */
	UEPagingID_PR_s_TMSI,
	UEPagingID_PR_iMSI
	/* Extensions may appear below */
	
} UEPagingID_PR;

/* Forward declarations */
struct S_TMSI;

/* UEPagingID */
typedef struct UEPagingID {
	UEPagingID_PR present;
	union UEPagingID_u {
		struct S_TMSI	*s_TMSI;
		IMSI_t	 iMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingID;
extern asn_CHOICE_specifics_t asn_SPC_UEPagingID_specs_1;
extern asn_TYPE_member_t asn_MBR_UEPagingID_1[2];
extern asn_per_constraints_t asn_PER_type_UEPagingID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingID_H_ */
#include <asn_internal.h>