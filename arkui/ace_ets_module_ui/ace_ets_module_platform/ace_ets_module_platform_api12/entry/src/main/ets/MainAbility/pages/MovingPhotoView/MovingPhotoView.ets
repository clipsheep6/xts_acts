// xxx.ets

import { MovingPhotoView, MovingPhotoViewController, MovingPhotoViewAttribute } from '@ohos.multimedia.movingphotoview'

const PHOTO_SELECT_EVENT_ID: number = 80001

@Entry
@Component
struct MovingPhotoViewDemo {
  @State isMuted: boolean = false
  @State text: string = 'start'
  @State text2: string = 'stop'
  controller: MovingPhotoViewController = new MovingPhotoViewController()



  build() {
    Column() {


      Text(this.text).key('MovingPhotoViewText')
      Text(this.text2).key('MovingPhotoViewText2')
      Row() {
        Column() {
          MovingPhotoView({
            movingPhoto: undefined,
            controller: this.controller
          })
            .width(100)
            .height(100)
            .muted(this.isMuted)
            .objectFit(ImageFit.Contain)
            .onStart(() => {
              console.log('onStart')
              this.text = 'start'
            })
            .onFinish(() => {
              console.log('onFinish')
            })
            .onStop(() => {
              console.log('onStop')
              this.text2 = 'onStop'
            })
            .onError(() => {
              console.log('onError')
            })
        }
      }
      .height(100)

      Row() {
        Button('start')
          .key('MovingPhotoViewStart')
          .onClick(() => {
            this.controller.startPlayback()
            this.text = 'start'
          })
          .margin(5)
        Button('stop')
          .key('MovingPhotoViewStop')
          .onClick(() => {
            this.controller.stopPlayback()
            this.text = 'stop'
          })
          .margin(5)
        Button('mute')
          .onClick(() => {
            this.isMuted = !this.isMuted
          })
          .margin(5)
      }
      .alignItems(VerticalAlign.Center)
      .justifyContent(FlexAlign.Center)
      .height('15%')
    }
  }

}
