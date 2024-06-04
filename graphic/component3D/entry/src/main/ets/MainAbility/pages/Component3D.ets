// xxx.ets
@Entry
@Component
struct Component3D_1 {
  scene: SceneOptions = { scene: $rawfile('gltf/DamagedHelmet/glTF/DamagedHelmet.gltf'), modelType: ModelType.SURFACE};
  @State mes:string=''
  build() {
    Row() {
      Column() {
        Text('GLTF Example')
        Component3D( this.scene )
          .id('Component3D_1')
          .shader($rawfile('shaders'))
          .shaderImageTexture($rawfile('gltf/DamagedHelmet/glTF/Default_normal.jpg'))
          .shaderInputBuffer([1.0,2.0])
          .customRender($rawfile('gltf/Cube/glTF/Cube_BaseColor.png'), true)
          .environment($rawfile('gltf/Environment/glTF/Environment.gltf'))
          .renderWidth('90%').renderHeight('90%')
      }.width('100%')
    }
    .height('100%')
  }
}