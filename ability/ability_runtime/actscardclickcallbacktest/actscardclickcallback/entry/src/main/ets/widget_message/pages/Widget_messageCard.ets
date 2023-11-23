@Entry
@Component
struct Widget_messageCard {
  readonly TITLE: string = 'message';
  readonly ACTION_TYPE: string = 'message';
  readonly ABILITY_NAME: string = 'EntryAbility';
  readonly MESSAGE: string = 'add detail';
  readonly FULL_WIDTH_PERCENT: string = '100%';
  readonly FULL_HEIGHT_PERCENT: string = '100%';

  build() {
    Row() {
      Column() {
        Text(this.TITLE)
          .fontSize($r('app.float.font_size'))
      }
      .width(this.FULL_WIDTH_PERCENT)
    }
    .height(this.FULL_HEIGHT_PERCENT)
    .onClick(() => {
      postCardAction(this, {
        "action": this.ACTION_TYPE,
        "params": {
          "message": this.MESSAGE
        }
      });
    })
  }
}