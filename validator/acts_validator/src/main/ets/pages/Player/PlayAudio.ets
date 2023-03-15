// @ts-ignore
import camera from '@ohos.multimedia.camera'
import Logger from '../model/Logger'
import CameraService from '../model/CameraService'
import { CustomContainer } from '../common/CameraPhotoContainer';
import FirstDialog from '../model/FirstDialog';
import router from '@ohos.router';

@Entry
@Component
struct cameraOrientation {
  @State FillColor: string = '#FF000000';
  @State name: string = 'PlayAudio';
  @State StepTips: string = '测试目的：用于测试音频播放暂停seek\n预期结果：音频播放暂停seek功能正常';
  private tag: string = 'qlw'
  @State Vue: boolean = false
  @State videoSrc: Resource = $rawfile('StarWars10s-1C-44100-2SW.wav')
  @State isAutoPlay: boolean = true
  @State showControls: boolean = true
  controller: VideoController = new VideoController()

  async aboutToAppear() {
    await FirstDialog.ChooseDialog(this.StepTips, this.name);
  }

  build() {
    Column() {
      Row() {
        Button() {
          Image($r('app.media.ic_public_back')).width('20vp').height('18vp').margin({ left: '20vp' })
        }.backgroundColor(Color.Black)
        .onClick(() => {
          router.back({
            url: 'pages/Camera/Camera_index',
            params: { result: 'None', }
          })
        })

        Text(this.name).fontColor(Color.White).fontSize('18fp').margin({ left: '-20vp' })
        Text('hello').fontColor(Color.White).visibility(Visibility.Hidden)
      }.backgroundColor(Color.Black).height('10%').width('100%').justifyContent(FlexAlign.SpaceBetween)

      Flex({ alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
        Video({
          src: this.videoSrc,
          controller: this.controller
        })
          .width('100%')
          .height('60%')
          .autoPlay(this.isAutoPlay)
          .controls(this.showControls)
      }.width('100%').height('80%').onClick(() => {
        this.showControls = !this.showControls
      })

      CustomContainer({
        title: this.name,
        Url: 'pages/Camera/Camera_index',
        StepTips: this.StepTips,
        FillColor: $FillColor,
        name: $name,
        Vue: $Vue
      }).height('10%').width('100%')
    }.width('100%').height('100%').backgroundColor(Color.Black)
  }
}