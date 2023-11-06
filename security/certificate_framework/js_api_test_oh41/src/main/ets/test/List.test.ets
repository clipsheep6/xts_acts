import certificateCRLJsunit from "./certificateCRL.test";
import certificateJsunit from "./certificate.test";
export default function testsuite() {
  certificateCRLJsunit();
  certificateJsunit()
}