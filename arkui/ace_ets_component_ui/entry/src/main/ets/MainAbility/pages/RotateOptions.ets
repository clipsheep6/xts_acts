import matrix4 from '@ohos.matrix4'

@Entry
@Component
struct RotateOptions {
  build() {
    Column() {
      Text('RotateOptions').width('90%').fontColor(0xCCCCCC).padding(15).fontSize(14)
      Row().id("RotateOptions")
        .rotate({
          x: 0,
          y: 0,
          z: 1,
          centerX: '50%',
          centerY: '50%',
          centerZ: 1,
          perspective: 2,
          angle: 300
        }) // 组件以矢量(0,0,1)为旋转轴，绕中心点顺时针旋转300度
        .width(100).height(100).backgroundColor(0xAFEEEE)
    }.width('100%').margin({ top: 5 })
  }
}