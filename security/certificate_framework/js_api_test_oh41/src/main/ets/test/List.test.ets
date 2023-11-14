import certificateCRLJsunit from "./certificateCRL.test";
import certificateJsunit from "./certificate.test";
import certificateStabJsunit from "./certificateStab.test";
export default function testsuite() {
  certificateCRLJsunit();
  certificateJsunit();
  certificateStabJsunit();
}