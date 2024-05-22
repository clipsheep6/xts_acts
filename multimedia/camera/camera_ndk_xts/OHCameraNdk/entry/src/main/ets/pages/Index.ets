import { hilog } from '@kit.PerformanceAnalysisKit';
import cameraOBJ from 'libentry.so'


const TAG = "CAMERA_NDK";

@Entry
@Component
struct Index {
  @State message: string = 'Hello World';

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            getCameraManagerInstance()
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}
function getCameraManagerInstance() {
  console.info(TAG + 'mSurfaceId : ' );
  let ret = cameraOBJ.initCamera("22",1);
  console.info(TAG + 'initCamera : ' + ret);
  if (ret != 0) {
    console.info(TAG + "getCameraManager FAILED");
  }
}