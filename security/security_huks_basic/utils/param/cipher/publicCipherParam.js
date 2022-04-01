import * as param from '../publicParam';

let HuksCipherAES = {
  HuksKeyAlgAES: {
    tag: param.HksTag.HKS_TAG_ALGORITHM,
    value: param.HksKeyAlg.HKS_ALG_AES,
  },
  HuksKeyPurpose: {
    tag: param.HksTag.HKS_TAG_PURPOSE,
    value:
      param.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT |
      param.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
  },
  HuksKeyPurposeENCRYPT: {
    tag: param.HksTag.HKS_TAG_PURPOSE,
    value: param.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT,
  },
  HuksKeyPurposeDECRYPT: {
    tag: param.HksTag.HKS_TAG_PURPOSE,
    value: param.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
  },
  HuksKeyAESSize128: {
    tag: param.HksTag.HKS_TAG_KEY_SIZE,
    value: param.HksKeySize.HKS_AES_KEY_SIZE_128,
  },
  HuksKeyAESSize192: {
    tag: param.HksTag.HKS_TAG_KEY_SIZE,
    value: param.HksKeySize.HKS_AES_KEY_SIZE_192,
  },
  HuksKeyAESSize256: {
    tag: param.HksTag.HKS_TAG_KEY_SIZE,
    value: param.HksKeySize.HKS_AES_KEY_SIZE_256,
  },
  HuksKeyAESPADDINGNONE: {
    tag: param.HksTag.HKS_TAG_PADDING,
    value: param.HksKeyPadding.HKS_PADDING_NONE,
  },
  HuksKeyAESPADDINGPKCS7: {
    tag: param.HksTag.HKS_TAG_PADDING,
    value: param.HksKeyPadding.HKS_PADDING_PKCS7,
  },
  HuksKeyAESBLOCKMODE: {
    tag: param.HksTag.HKS_TAG_BLOCK_MODE,
    value: param.HksCipherMode.HKS_MODE_CBC,
  },
  HuksKeyAESBLOCKMODECTR: {
    tag: param.HksTag.HKS_TAG_BLOCK_MODE,
    value: param.HksCipherMode.HKS_MODE_CTR,
  },
  HuksKeyAESBLOCKMODEECB: {
    tag: param.HksTag.HKS_TAG_BLOCK_MODE,
    value: param.HksCipherMode.HKS_MODE_ECB,
  },
  HuksKeyAESDIGESTNONE: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_NONE,
  },
};

let HuksCipherRSA = {
  HuksKeyAlgRSA: {
    tag: param.HksTag.HKS_TAG_ALGORITHM,
    value: param.HksKeyAlg.HKS_ALG_RSA,
  },
  HuksKeyPurpose: {
    tag: param.HksTag.HKS_TAG_PURPOSE,
    value:
      param.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT |
      param.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
  },
  HuksKeyPurposeENCRYPT: {
    tag: param.HksTag.HKS_TAG_PURPOSE,
    value: param.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT,
  },
  HuksKeyPurposeDECRYPT: {
    tag: param.HksTag.HKS_TAG_PURPOSE,
    value: param.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
  },
  HuksKeyRSASize512: {
    tag: param.HksTag.HKS_TAG_KEY_SIZE,
    value: param.HksKeySize.HKS_RSA_KEY_SIZE_512,
  },
  HuksKeyRSAPADDINGNONE: {
    tag: param.HksTag.HKS_TAG_PADDING,
    value: param.HksKeyPadding.HKS_PADDING_NONE,
  },
  HuksKeyRSAPADDINGPKCS1V15: {
    tag: param.HksTag.HKS_TAG_PADDING,
    value: param.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
  },
  HuksKeyRSAPADDINGOAEP: {
    tag: param.HksTag.HKS_TAG_PADDING,
    value: param.HksKeyPadding.HKS_PADDING_OAEP,
  },
  HuksKeyRSABLOCKMODEECB: {
    tag: param.HksTag.HKS_TAG_BLOCK_MODE,
    value: param.HksCipherMode.HKS_MODE_ECB,
  },
  HuksKeyRSADIGESTNONE: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_NONE,
  },
  HuksKeyRSADIGESTSHA1: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_SHA1,
  },
  HuksKeyRSADIGESTSHA224: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_SHA224,
  },
  HuksKeyRSADIGESTSHA256: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_SHA256,
  },
  HuksKeyRSADIGESTSHA384: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_SHA384,
  },
  HuksKeyRSADIGESTSHA512: {
    tag: param.HksTag.HKS_TAG_DIGEST,
    value: param.HksKeyDigest.HKS_DIGEST_SHA512,
  },
};
export { HuksCipherAES, HuksCipherRSA };
