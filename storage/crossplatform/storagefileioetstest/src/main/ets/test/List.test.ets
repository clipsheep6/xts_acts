import fileIO from './FileIO.test'
import FileIODirent from './FileIODirent.test'
import fileioDirClose from './module_fileio/class_dir/close.test'
import fileioFdatasync from './module_fileio/members/fdatasync.test'
import fileioFsync from './module_fileio/members/fsync.test'
import fileioMkdirRmdir from './module_fileio/members/mkdir_rmdir.test'
import fileioMkdtemp from './module_fileio/members/mkdtemp.test'
import fileioOpen from './module_fileio/members/open.test'
import fileioRename from './module_fileio/members/rename.test'
import fileioRmdir from './module_fileio/members/rmdir.test'
import fileioTruncate from './module_fileio/members/truncate.test'
import fileioUnlink from './module_fileio/members/unlink.test'
import fileioWrite from './module_fileio/members/write.test'
import fileioRead from './module_fileio/members/read.test'
import fileioStat from './module_fileio/members/stat.test'

export default function testsuite() {
  fileIO()
  FileIODirent()
  fileioDirClose()
  fileioFdatasync()
  fileioFsync()
  fileioMkdirRmdir()
  fileioMkdtemp()
  fileioOpen()
  fileioRename()
  fileioRmdir()
  fileioTruncate()
  fileioUnlink()
  fileioWrite()
  fileioRead()
  fileioStat()
}