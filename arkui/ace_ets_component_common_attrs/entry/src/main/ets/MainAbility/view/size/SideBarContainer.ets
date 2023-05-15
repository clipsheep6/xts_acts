
@Component
export struct SideBarContainers {
  @State arr: number[] = [1, 2, 3]
  @State current: number = 1

  build() {
      SideBarContainer(SideBarContainerType.Embed) {
        Column() {
          ForEach(this.arr, (item, index) => {
              Text("Index0" + item)
          }, item => item)
        }
      }
  }
}