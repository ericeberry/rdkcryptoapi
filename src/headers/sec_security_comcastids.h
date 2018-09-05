/*
 * ============================================================================
 * COMCAST CONFIDENTIAL AND PROPRIETARY
 * ============================================================================
 * This file and its contents are the intellectual property of Comcast.  It may
 * not be used, copied, distributed or otherwise  disclosed in whole or in part
 * without the express written permission of Comcast.
 * ============================================================================
 * Copyright (c) 2013, 2014 Comcast. All rights reserved.
 * ============================================================================
 */

#ifndef SEC_SECURITY_COMCASTIDS_H_
#define SEC_SECURITY_COMCASTIDS_H_

#include "sec_security_datatype.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* adobe reserved space */
#define SEC_OBJECTID_ADOBE_TOP  0xffffffffffff0400ULL
#define SEC_OBJECTID_ADOBE_BASE 0xffffffffffff0000ULL

/* comcast object ids */
#define SEC_OBJECTID_COMCAST_XCALSESSIONMACKEY 0xffffffff00000001ULL
#define SEC_OBJECTID_COMCAST_XCALSESSIONMACKEYTOKEN 0xffffffff00000002ULL
#define SEC_OBJECTID_COMCAST_SOCIDPHMACKEY 0xffffffff00000003ULL
#define SEC_OBJECTID_COMCAST_XCALSESSIONCONTEXTTOKEN 0xffffffff00000004ULL
#define SEC_OBJECTID_COMCAST_CIMAACCTTOKEN 0xffffffff00000005ULL
#define SEC_OBJECTID_COMCAST_XCALSESSIONMACKEY_HASH 0xffffffff00000006ULL
#define SEC_OBJECTID_COMCAST_XCALSESSIONMACKEYTOKEN_HASH 0xffffffff00000007ULL
#define SEC_OBJECTID_COMCAST_FKPSRT_MANIFEST 0xffffffff00000008ULL
#define SEC_OBJECTID_COMCAST_XCALSESSIONENCKEY 0xffffffff00000009ULL
#define SEC_OBJECTID_COMCAST_XCALSESSIONENCKEY_HASH 0xffffffff0000000aULL

#define SEC_OBJECTID_COMCAST_SGNCERT 0x0111000001110001ULL
#define SEC_OBJECTID_COMCAST_SGNSUBCACERT 0x0111000001110002ULL
#define SEC_OBJECTID_COMCAST_SGNROOTCACERT 0x0111000001110003ULL
#define SEC_OBJECTID_COMCAST_ENCCERT 0x0111000001110004ULL
#define SEC_OBJECTID_COMCAST_ENCSUBCACERT 0x0111000001110005ULL
#define SEC_OBJECTID_COMCAST_ENCROOTCACERT 0x0111000001110006ULL
#define SEC_OBJECTID_COMCAST_TLSCERT 0x0111000001110007ULL
#define SEC_OBJECTID_COMCAST_TLSSUBCACERT 0x0111000001110008ULL
#define SEC_OBJECTID_COMCAST_TLSROOTCACERT 0x0111000001110009ULL
#define SEC_OBJECTID_COMCAST_KEKCERT 0x011100000111000AULL
#define SEC_OBJECTID_COMCAST_CERTCA01CERT 0x0211000002110001ULL
#define SEC_OBJECTID_COMCAST_STATUSCA01CERT 0x0211000002110002ULL
#define SEC_OBJECTID_COMCAST_SGNKEY 0x0311000003110001ULL
#define SEC_OBJECTID_COMCAST_ENCKEY 0x0311000003110002ULL
#define SEC_OBJECTID_COMCAST_TLSKEY 0x0311000003110003ULL
#define SEC_OBJECTID_COMCAST_TRANSFORMKEY 0x0311000003110004ULL
#define SEC_OBJECTID_COMCAST_KEKKEY 0x0311000003110005ULL
#define SEC_OBJECTID_COMCAST_PKIBUNDLE 0x0511000005110001ULL
#define SEC_OBJECTID_COMCAST_BRCM_OTP 0x0611000006110003ULL
#define SEC_OBJECTID_COMCAST_HASHLOCKED 0x0711000007110001ULL

/* adobe object ids */
#define SEC_OBJECTID_ADOBE_DRMMODELSGNKEY  0x0321000003254030ULL /* temp id - will change */
#define SEC_OBJECTID_ADOBE_DRMMODELSGNCERT 0x0121000001210012ULL /* temp id - will change */
#define SEC_OBJECTID_ADOBE_DRMMODELENCKEY  0x0321000003264030ULL /* temp id - will change */
#define SEC_OBJECTID_ADOBE_DRMMODELENCCERT 0x0121000001210013ULL /* temp id - will change */
#define SEC_OBJECTID_ADOBE_DRMMODELKEY 0x0321000003214030ULL
#define SEC_OBJECTID_ADOBE_DRMMODELCERT 0x0121000001210001ULL
#define SEC_OBJECTID_ADOBE_DRMMODELINTERMEDIATERUNTIMEDRMCACERT 0x0121000001210002ULL
#define SEC_OBJECTID_ADOBE_DRMMODELINTERMEDIATECACERT 0x0121000001210003ULL
#define SEC_OBJECTID_ADOBE_DRMMODELROOTCACERT 0x0121000001210004ULL
#define SEC_OBJECTID_ADOBE_SD01CERT 0x0121000001210005ULL
#define SEC_OBJECTID_ADOBE_SD01INTERMEDIATERUNTIMEDRMCACERT 0x0121000001210006ULL
#define SEC_OBJECTID_ADOBE_SD01INTERMEDIATECACERT 0x0121000001210007ULL
#define SEC_OBJECTID_ADOBE_SD01ROOTCACERT 0x0121000001210008ULL
#define SEC_OBJECTID_ADOBE_SD02CERT 0x0121000001210009ULL
#define SEC_OBJECTID_ADOBE_SD02INTERMEDIATERUNTIMEDRMCACERT 0x012100000121000AULL
#define SEC_OBJECTID_ADOBE_SD02INTERMEDIATECACERT 0x012100000121000BULL
#define SEC_OBJECTID_ADOBE_SD02ROOTCACERT 0x012100000121000CULL
#define SEC_OBJECTID_ADOBE_SD03CERT 0x012100000121000DULL
#define SEC_OBJECTID_ADOBE_SD03INTERMEDIATERUNTIMEDRMCACERT 0x012100000121000EULL
#define SEC_OBJECTID_ADOBE_SD03INTERMEDIATECACERT 0x012100000121000FULL
#define SEC_OBJECTID_ADOBE_SD03ROOTCACERT 0x0121000001210010ULL
#define SEC_OBJECTID_ADOBE_INDIVTRANSPORTCERT 0x0121000001210011ULL
#define SEC_OBJECTID_ADOBE_SD01KEY 0x0321000003224030ULL
#define SEC_OBJECTID_ADOBE_SD02KEY 0x0321000003234030ULL
#define SEC_OBJECTID_ADOBE_SD03KEY 0x0321000003244030ULL
#define SEC_OBJECTID_ADOBE_TRANSFORMKEY 0x0321000003254030ULL
#define SEC_OBJECTID_ADOBE_PRODADOBEROOTDIGEST 0x0421000004210001ULL
#define SEC_OBJECTID_ADOBE_DRMPKI 0x0621000006210001ULL
#define SEC_OBJECTID_ADOBE_DRMPKI_ENHANCED 0x0621000006210002ULL

#define SEC_OBJECTID_PLAYREADY_MODELCERT 0x0631000006310001ULL
#define SEC_OBJECTID_PLAYREADY_MODELKEY 0x0331000003310001ULL

#define SEC_OBJECTID_WV_KEY 0x0351000003510001ULL
#define SEC_OBJECTID_WV_CERTBUNDLE 0x0651000006510001ULL

#define SEC_FKPSTYPE_CERTIFICATE 0x01
#define SEC_FKPSTYPE_CACERTIFICATE 0x02
#define SEC_FKPSTYPE_KEYCONTAINER 0x03
#define SEC_FKPSTYPE_MESSAGEDIGEST 0x04
#define SEC_FKPSTYPE_PKIBUNDLE 0x05
#define SEC_FKPSTYPE_DRMPKIBUNDLE 0x06
#define SEC_FKPSTYPE_HASHLOCKED 0x07
#define SEC_FKPSTYPE_RESERVED 0xFF

/**
 * @brief Get the logical name that corresponds to the object_id.  Returns empty string if
 * object_id has no logical name mapping
 */
const char* Sec_GetObjectUrn(SEC_OBJECTID object_id);

/**
 * @brief Get the object id that corresponds to the urn.  Returns SEC_OBJECTID_INVALID if urn
 * is unknown
 */
SEC_OBJECTID Sec_GetObjectId(const char* urn);

#ifdef __cplusplus
}
#endif

#endif /* SEC_SECURITY_COMCASTIDS_H_ */
