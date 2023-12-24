// xxx.ets
@Entry
@Component
struct GestureClick {
  @State text: string = ''

  build() {
    Column() {
      Row({ space: 20 }) {
        Button('Click').width(200).height(50)
          .onClick((event?: ClickEvent) => {
            if(event){
              this.text = 'GestureClick'
            }
          })
      }.margin(20)

      Text('GestureClick').margin(15).id("GestureClick")
    }.width('100%')
  }
}