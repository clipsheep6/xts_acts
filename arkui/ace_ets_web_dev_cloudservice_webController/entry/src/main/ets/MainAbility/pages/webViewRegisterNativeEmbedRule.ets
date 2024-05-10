/**
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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

import webview from '@ohos.web.webview';
import { UIContext } from '@ohos.arkui.UIContext';
import { BuilderNode, FrameNode, NodeController, NodeRenderType } from '@ohos.arkui.node';
import events_emitter from '@ohos.events.emitter';
import Utils from '../../test/Utils';

declare class Params {
    text : string
    text1 : string
    width : number
    height : number
}

declare class mapItem {
    surfaceId : string
    embedId : string
    width : number
    height : number
}

class MyNodeController extends NodeController {
    private rootNode : BuilderNode<[Params]> | undefined;
    private embedId_ : string = "";
    private surfaceId_ : string = "";
    private renderType_: NodeRenderType = NodeRenderType.RENDER_TYPE_DISPLAY;
    private width_ : number = 0;
    private height_ : number = 0;
    private isNode = true;
        
    setRenderOption(surfaceId: string, renderType: NodeRenderType, embedId: string, width: number, height: number) {
        this.surfaceId_ = surfaceId;
        this.renderType_ = renderType;
        this.embedId_ = embedId
        this.width_ = width;
        this.height_ = height;
    }
    
    makeNode(uiContext: UIContext): FrameNode | null {
        this.rootNode = new BuilderNode(uiContext, { surfaceId: this.surfaceId_, type: this.renderType_});
        if (this.isNode && this.rootNode) {
            this.rootNode.build(wrapBuilder(ButtonBuilder), { text: "button1",
                text1: "button2", width : this.width_, height : this.height_ })
            return this.rootNode.getFrameNode();
        } else {
            return null;
        }
    }
    getEmbedId() : string {
        return this.embedId_;
    }
    destroy() {
        this.isNode = false
    }
    add() {
        this.isNode = true
    }
    postEvent(event:TouchEvent | undefined) : boolean {
        return this.rootNode?.postTouchEvent(event) as boolean
    }
}

class MyNodeController1 extends NodeController {
    private rootNode : BuilderNode<[Params]> | undefined;
    private embedId_ : string = "";
    private surfaceId_ : string = "";
    private renderType_: NodeRenderType = NodeRenderType.RENDER_TYPE_DISPLAY;
    private width_ : number = 0;
    private height_ : number = 0;
    private isNode = true;
        
    setRenderOption(surfaceId: string, renderType: NodeRenderType, embedId: string, width: number, height: number) {
        this.surfaceId_ = surfaceId;
        this.renderType_ = renderType;
        this.embedId_ = embedId
        this.width_ = width;
        this.height_ = height;
    }
    
    makeNode(uiContext: UIContext): FrameNode | null {
        this.rootNode = new BuilderNode(uiContext, { surfaceId: this.surfaceId_, type: this.renderType_});
        this.rootNode.build(wrapBuilder(ButtonBuilder), { text: "button3",
             text1: "button4", width : this.width_, height : this.height_ })
        if (this.isNode && this.rootNode) {
            return this.rootNode.getFrameNode();
        } else {
            return null;
        }
    }
    getEmbedId() : string {
        return this.embedId_;
    }
    destroy() {
        this.isNode = false
    }
    add() {
        this.isNode = true
    }
    postEvent(event:TouchEvent | undefined) : boolean {
        if (this.rootNode != null) {
            return this.rootNode.postTouchEvent(event)
        }
        return false
    }
}
 
@Component
struct MyComponent {
    @Prop params: Params
    @State bkColor: Color = Color.Red
    @State index: Boolean = false;
    
    videoController: videoController = new videoController();
    player?: AVPlayerDemo
    offset_x: number = 0
    offset_y: number = 0
    @State video_width_percent: number = 100;
    @State video_height_percent: number = 100;
    view_width: number = 0;
    view_height: number = 0;
    video_width: number = 0;
    video_height: number = 0;
    
    fullscreen: boolean = false;
    
    onSizeChanged(width: number, height: number) {
        this.video_width = width;
        this.video_height = height;
        let scale: number = this.view_width / width;
        let scaled_video_height: number = scale * height;
        this.video_height_percent = scaled_video_height / this.view_height * 100;
        console.log('[BrowserShell] onSizeChanged(' + width + ',' + height + '), video_height_percent[' + this.video_height_percent + ']')
    }
    
    build() {
        Column({ space: 3 }) {
            Button(this.params.text)
              .height(100 + 'px')
              .width(400 + 'px')
              .border({ width: 2, color: Color.Red })
              .backgroundColor(this.bkColor)
              .onClick(() => {
                  this.index =! this.index
                  if (this.index) {
                      this.bkColor = Color.Blue
                  }
                  else {
                      this.bkColor = Color.Red
                  }
              })
        }
        .width(this.params.width)
        .height(this.params.height)
    }
}

@Builder
function ButtonBuilder(params: Params) {
    MyComponent({ params: params })
     .backgroundColor(Color.Green)
}

@Entry
@Component
struct webViewRegisterNativeEmbedRule {
  browserTabController: WebviewController = new webview.WebviewController();
  private NodeController: MyNodeController = new MyNodeController()
  private NodeController1: MyNodeController1 = new MyNodeController()

  @State NodeContainerWidth : number = 0
  @State NodeContainerHeight : number = 0
  @State NodeContainer1Width : number = 0
  @State NodeContainer1Height : number = 0
  private embedMap : Map<string, mapItem> = new Map()
  @State num : number = 0
  @State eventType : string = '触碰类型‘
  @State eventType2 : string = '触碰次数‘
  @State str : string = "emitWebViewRegisterNativeEmbedRule";
  @State javaScriptAccess: boolean = true;
  @State fileAccess: boolean = true;
  @State domStorageAccess: boolean = true;
  @State imageAccess: boolean = true;
  @State onlineImageAccess: boolean = true;
  @State isObject : boolean = false;
  @State databaseAccess: boolean = true;
  @State userAgent: string = "Mozilla/5.0 (Window NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko)" +
         "Chrome/105.0.0.0 Safari/537.36 Edg/105.0.1343.27";
  
  onPageShow() {
      let valueChangeEvent: events_emitter.InnerEvent = {
          eventId: 10,
          priority: events_emitter.EventPriority.LOW
      }
      events_emitter.on(valueChangeEvent, this.valueChangeCallBack)
  }
  
  private valueChangeCallBack = (eventData: events_emitter.eventData) => {
      if (eventData != null) {
          console.info("valueChangeCallBack:" + JSON.stringify(eventData));
          if (eventData.data != null && eventData.data.ACTION != null) {
              this.emitKey = eventData.data.ACTION;
          }
      }
  }
  
  aboutAppear() {
      webview.WebviewController.setWebDebuggingAccess(true);
  }
  
  build() {
      Column({ space: 5 }) {
          Button("web click").key('webViewRegisterNativeEmbedRule')
            .onClick(() => {
                    switch (this.str) {
                        case "emitWebViewRegisterNativeEmbedRule": {
                            console.info('>>>>>registerNativeEmbedRule:' + this.isObject)
                            Utils.emitEvent(this.isObject, 10003)
                            break;
                        }
                    }
            })
            .height(45)
            .margin({ right: 10 })
            Button("remove").onClick(() => {
                if (this.NodeController && this.NodeController1) {
                    this.NodeController.add()
                    this.NodeController.rebuild()
                    this.NodeController1.add()
                    this.NodeController1.rebuild()
                }
            }).key('add')
            Text(this.eventType)
            Text(this.eventType2)
          Stack() {
              NodeContainer(this.NodeController)
                .width(this.NodeContainerWidth)
                .height(this.NodeContainerHeight)
                .backgroundColor(Color.Yellow)
              NodeContainer(this.NodeController1)
                .width(this.NodeContainer1Width)
                .height(this.NodeContainer1Height)
                .backgroundColor(Color.Yellow)            
              Web({ src: $rawfile("registerNativeEmbedRule.html"), controller: this.browserTabController })
                .enableNativeEmbedMode(true)
                .registerNativeEmbedRule("object", "application/view")
                .onNativeEmbedLifecycleChange((embed) => {
                    console.log("NativeEmbed surfaceId" + embed.surfaceId);
                    console.log("NativeEmbed embed.info.tag" + embed.info?.tag);
                    if (embed.info?.tag == 'OBJECT') {
                        this.isObject = true
                    }
                    if (embed.status == NativeEmbedStatus.CREATE) {
                        console.log("NativeEmbed create" + JSON.stringify(embed.info));
                        this.embedMap.set(embed.info?.i as string, {surfaceId : embed.surfaceId as string,
                            embedId : embed.embedId as string, width : embed.info?.width as number, height : embed.info?.height as number})
                        if (this.embedMap.size === 2) {
                            this.nodeController.setRenderOption(this.embedMap?.get("cameraTest")?.surfaceId as string, NodeRenderType.RENDER_TYPE_TEXTURE,
                                                                this.embedMap?get("cameraTest")?.embedId as string, px2vp(this.embedMap?get("cameraTest")?.width),
                                                                px2vp(this.embedMap?get("cameraTest")?.height))
                            this.nodeController.rebuild()
                            console.log("surfaceId = " + this.embedMap?get("cameraTest")?.surfaceId);
                            this.NodeContainerWidth = px2vp(this.embedMap?get("cameraTest")?.width);
                            this.NodeContainerHeight = px2vp(this.embedMap?get("cameraTest")?.height);
                            
                            this.nodeController1.setRenderOption(this.embedMap?.get("cameraTest1")?.surfaceId as string, NodeRenderType.RENDER_TYPE_TEXTURE,
                                                                this.embedMap?get("cameraTest1")?.embedId as string, px2vp(this.embedMap?get("cameraTest1")?.width),
                                                                px2vp(this.embedMap?get("cameraTest1")?.height))
                            this.nodeController1.rebuild()
                            console.log("surfaceId1 = " + this.embedMap?get("cameraTest1")?.surfaceId);
                            this.NodeContainer1Width = px2vp(this.embedMap?get("cameraTest1")?.width);
                            this.NodeContainer1Height = px2vp(this.embedMap?get("cameraTest1")?.height);
                        }
                    }else if (embed.status == NativeEmbedStatus.UPDATE) {
                        console.log("NativeEmbed update" + JSON.stringify(embed.info));
                    } else {
                        console.log("NativeEmbed destroy" + JSON.stringify(embed.info));
                    }
                })
                .onNativeEmbedGestureEvent((touch) => {
                    this.num += 1
                    this.eventType2 = 'onNativeEmbedGestureEvent' + this.num
                    if (touch && touch.touchEvent) {
                        if (touch.touchEvent.type == TouchType.Down) {
                            this.eventType = 'Down'
                        }
                        if (touch.touchEvent.type == TouchType.Up) {
                            this.eventType = 'Up'
                        }
                        if (touch.touchEvent.type == TouchType.Move) {
                            this.eventType = 'Move'
                        }
                        if (touch.touchEvent.type == TouchType.Cancel) {
                            this.eventType = 'Cancel'
                        }
                    }
                    console.log("NativeEmbed onNativeEmbedGestureEvent" + JSON.stringify(touch.touchEvent));
                    if (this.nodeController.getEmbedId() === touch.embedId) {
                        let ret = this.nodeController?.postEvent(touch.touchEvent);
                        if (ret) {
                            console.log("onNativeEmbedGestureEvent nodeController success");
                        } else {
                            console.log("onNativeEmbedGestureEvent nodeController fail");
                        }
                    }
                    if (this.nodeController1.getEmbedId() === touch.embedId) {
                        let ret = this.nodeController1?.postEvent(touch.touchEvent);
                        if (ret) {
                            console.log("onNativeEmbedGestureEvent nodeController1 success");
                        } else {
                            console.log("onNativeEmbedGestureEvent nodeController1 fail");
                        }
                    }
                })
                .width('100%')
                .height('100%')
          }
      }
      .width('100%')
      .height('100%')
  }
}
