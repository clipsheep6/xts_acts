import fileIOClose from "./members/close.test";
import fileIOFdatasync from "./members/fdatasync.test";
import fileIOFsync from "./members/fsync.test";
import fileIOMkdir from "./members/mkdir.test";
import fileIOMkdtemp from "./members/mkdtemp.test";
import fileIOOpen from "./members/open.test";
import fileIORead from "./members/read.test";
import fileIORename from "./members/rename.test";
import fileIORmdir from "./members/rmdir.test";
import fileIOStat from "./members/stat.test";
import fileIOTruncate from "./members/truncate.test";
import fileIOUnlink from "./members/unlink.test";
import fileIOWrite from "./members/write.test";

export default function testsuite() {
  fileIOClose();
  fileIOFdatasync();
  fileIOFsync();
  fileIOMkdir();
  fileIOMkdtemp();
  fileIOOpen();
  fileIORead();
  fileIORename();
  fileIORmdir();
  fileIOStat();
  fileIOTruncate();
  fileIOUnlink();
  fileIOWrite();
}
