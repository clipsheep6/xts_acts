import matrix4 from '@ohos.matrix4'

@Entry
@Component
struct setPolyToPoly {

  private matrix1 = matrix4.identity().setPolyToPoly({ src: [{x:0, y:0}, {x:200, y:0}, {x:0, y:200}, {x:200, y:200} ],
    dst:[{x:150, y:0}, {x:250, y:0}, {x:0, y:200}, {x:200, y:200} ], pointCount:4})

  build() {
    Column() {
      Image($r("app.media.icon"))
        .id('ImageSetPoly')
        .transform(this.matrix1)
        .width(150)
        .height(150)
    }.width("100%").height("100%")

  }
}