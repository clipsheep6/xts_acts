@Component
export struct RemoteWindowView {
  @State target: WindowAnimationTarget = undefined;
  private componentKey: string;

  build() {
    RemoteWindow(this.target)
      .translate({ x: 100, y: 200 })
      .scale({ x: 0.5, y: 0.5 })
      .opacity(0.8)
      .width(px2vp(this.target?.windowBounds.width))
      .height(px2vp(this.target?.windowBounds.height))
      .backgroundColor(Color.Orange)
      .key(this.componentKey)
  }
}