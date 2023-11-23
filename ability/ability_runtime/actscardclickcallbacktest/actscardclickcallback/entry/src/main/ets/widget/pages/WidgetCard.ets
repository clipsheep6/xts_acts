@Entry
@Component
struct WidgetCard {
  readonly TITLE: string = 'router';
  readonly ACTION_TYPE: string = 'router';
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
        "abilityName": 'SecondAbility',
        "params": {
          "message": this.MESSAGE
        }
      });
    })
  }
}