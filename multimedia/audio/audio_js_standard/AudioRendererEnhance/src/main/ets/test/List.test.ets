import getMax_MinStreamVolume from './GetMaxAndMinStreamVolume.test.ets'
import getUnderflowCount from './GetUnderflowCount.test.ets'
import get_setRendererSamplingRate from './GetAndSetRendererSamplingRate.test.ets'
import getCurrentOutputDevices from './GetCurrentOutputDevices.test.ets'
import on_off_outputDeviceChange from './OnOffOutputDeviceChange.test.ets'
import getMax_MinStreamVolumePerf from './GetMaxAndMinStreamVolumePerf.test.ets'
import getUnderflowCountPerf from './GetUnderflowCountPerf.test.ets'
import get_setRendererSamplingRatePerf from './GetAndSetRendererSamplingRatePerf.test.ets'
import getCurrentOutputDevicesPerf from './GetCurrentOutputDevicesPerf.test.ets'

export default function testsuite() {
  getMax_MinStreamVolume();
  getUnderflowCount();
  get_setRendererSamplingRate();
  getCurrentOutputDevices();
  on_off_outputDeviceChange();

  getMax_MinStreamVolumePerf();
  getUnderflowCountPerf();
  get_setRendererSamplingRatePerf();
  getCurrentOutputDevicesPerf();
}
