import SecurityRandomSyncJsunit from './SecurityRandomSync.test';
import SecuritySignatureVerificationJsunit from './SecuritySignatureVerification.test';
import SecurityCipherJsunit from './SecurityCipher.test';

export default function testsuite() {
  SecurityRandomSyncJsunit();
  SecuritySignatureVerificationJsunit();
  SecurityCipherJsunit();
}