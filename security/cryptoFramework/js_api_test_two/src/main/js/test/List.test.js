import SymmetricCryptographyJsunit from './SymmetricCryptography.test';
import AsymmetricCryptographyJsunit from './AsymmetricCryptography.test';
import DigestAlgorithmJsunit from './DigestAlgorithm.test';
import SecurityRandomJsunit from './SecurityRandom.test';
import SecurityRandomSyncJsunit from './SecurityRandomSync.test';
import SecuritySignAndVerifyJsunit from './SecuritySignAndVerify.test';
import SecurityKeyAgreementJsunit from './SecurityKeyAgreement.test';
import SecurityKeyGenerationAndConversionJsunit from './SecurityKeyGenerationAndConversion.test';

export default function testsuite() {
  SymmetricCryptographyJsunit();
  AsymmetricCryptographyJsunit();
  DigestAlgorithmJsunit();
  SecurityRandomJsunit();
  SecurityRandomSyncJsunit();
  SecuritySignAndVerifyJsunit();
  SecurityKeyAgreementJsunit();
  SecurityKeyGenerationAndConversionJsunit();
}