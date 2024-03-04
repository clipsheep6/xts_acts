//import abilityTest from './Ability.test';
import AssetDeleteTest from './AssetDelete.test';
import AssetUpdateTest from './AssetUpdate.test';
import AssetWriteAndQueryNewTest from './AssetWriteAndQuery.test'
import AssetAuthQuery from './AssetAuthQuery.test';
import AssetSynctest from './AssetSync.test';
import AssetPerformanceNewtest from './AssetPerformanceNew.test';

export default function testsuite() {
  //abilityTest();
  AssetDeleteTest();
  AssetUpdateTest();
  AssetWriteAndQueryNewTest();
  AssetAuthQuery();
  AssetSynctest();
  AssetPerformanceNewtest();
}