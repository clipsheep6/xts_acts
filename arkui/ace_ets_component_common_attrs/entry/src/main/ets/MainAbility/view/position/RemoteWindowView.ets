/**
 * Copyright (c) 2023-2030 iSoftStone Information Technology (Group) Co.,Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

@Component
export struct RemoteWindowView {
  @State target: WindowAnimationTarget = undefined;
  @Link _position: Position;
  private componentKey: string;

  build() {
    RemoteWindow(this.target)
      .translate({ x: 100, y: 200 })
      .scale({ x: 0.5, y: 0.5 })
      .opacity(0.8)
      .width(px2vp(this.target?.windowBounds.width))
      .height(px2vp(this.target?.windowBounds.height))
      .backgroundColor(Color.Orange)
      .position(this._position)
      .key(this.componentKey)
  }
}