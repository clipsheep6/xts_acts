import * as Param from '../publicParam.js';

let HuksHmac = {
  HuksKeyAlg: {
    tag: Param.HksTag.HKS_TAG_ALGORITHM,
    value: Param.HksKeyAlg.HKS_ALG_HMAC,
  },
  HuksKeyPurpose: {
    tag: Param.HksTag.HKS_TAG_PURPOSE,
    value: Param.HksKeyPurpose.HKS_KEY_PURPOSE_MAC,
  },
  HuksKeySIZE: {
    tag: Param.HksTag.HKS_TAG_KEY_SIZE,
    value: Param.HksKeySize.HKS_RSA_KEY_SIZE_512,
  },
  HuksTagDigestSHA1: {
    tag: Param.HksTag.HKS_TAG_DIGEST,
    value: Param.HksKeyDigest.HKS_DIGEST_SHA1,
  },
  HuksTagDigestSHA224: {
    tag: Param.HksTag.HKS_TAG_DIGEST,
    value: Param.HksKeyDigest.HKS_DIGEST_SHA224,
  },
  HuksTagDigestSHA256: {
    tag: Param.HksTag.HKS_TAG_DIGEST,
    value: Param.HksKeyDigest.HKS_DIGEST_SHA256,
  },
  HuksTagDigestSHA384: {
    tag: Param.HksTag.HKS_TAG_DIGEST,
    value: Param.HksKeyDigest.HKS_DIGEST_SHA384,
  },
  HuksTagDigestSHA512: {
    tag: Param.HksTag.HKS_TAG_DIGEST,
    value: Param.HksKeyDigest.HKS_DIGEST_SHA512,
  },
};

export { HuksHmac };
