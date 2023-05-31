import SecurityRandomSyncJsunit from './SecurityRandomSync.test';
import SecuritySignatureVerificationJsunit from './SecuritySignatureVerification.test';
import SecurityKeyAgreementJsunit from './SecurityKeyAgreement.test';
import SecurityCipherJsunit from './SecurityCipher.test';
import AsyKeyGeneratorBySpecJsunit from './AsyKeyGeneratorBySpec.test';
import AsyGetKeySpecBySpecJsunit from './AsyGetKeySpecBySpec.test';

import SecurityCipherSpecJsunit from './SecurityCipherSpec.test';

export default function testsuite() {
  SecurityRandomSyncJsunit();
  SecuritySignatureVerificationJsunit();
  SecurityKeyAgreementJsunit();
  SecurityCipherJsunit();
  AsyKeyGeneratorBySpecJsunit();
  AsyGetKeySpecBySpecJsunit();
  SecurityCipherSpecJsunit();
}