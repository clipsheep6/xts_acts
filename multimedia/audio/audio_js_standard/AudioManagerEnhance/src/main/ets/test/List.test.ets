import isVolumeUnadjustable from './IsVolumeUnadjustable.test.ets';
import getSystemVolumeInDb from './GetSystemVolumeInDb.test.ets';
import adjustVolumeByStep from './AdjustVolumeByStep.test.ets';
import adjustSystemVolumeByStep from './AdjustSystemVolumeByStep.test.ets';
import getDefaultVolume from './GetDefaultVolume.test.ets';
import getMax_Minvolume from './GetMax_Minvolume.test.ets';
import isVolumeUnadjustablePerf from './IsVolumeUnadjustablePerf.test.ets';
import getSystemVolumeInDbPerf from './GetSystemVolumeInDbPerf.test.ets';
import adjustVolumeByStepPerf from './AdjustVolumeByStepPerf.test.ets';
import adjustSystemVolumeByStepPerf from './AdjustSystemVolumeByStepPerf.test.ets';


export default function testsuite() {
  getDefaultVolume();
  getMax_Minvolume();
  isVolumeUnadjustable();
  adjustVolumeByStep();
  adjustSystemVolumeByStep();
  getSystemVolumeInDb();

  isVolumeUnadjustablePerf();
  adjustVolumeByStepPerf();
  adjustSystemVolumeByStepPerf();
  getSystemVolumeInDbPerf();
}