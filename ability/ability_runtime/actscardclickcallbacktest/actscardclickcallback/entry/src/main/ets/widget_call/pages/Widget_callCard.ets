@Entry
@Component
struct Widget_callCard {
  readonly TITLE: string = 'call';
  readonly ACTION_TYPE: string = 'call';
  readonly ABILITY_NAME: string = 'SecondAbility';
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
      console.info('====> call EntryAbility beCalled');
      postCardAction(this, {
        'action': 'call',
        "abilityName": 'EntryAbility',
        "params": {
          'method': 'Called'
        }
      });
    })
  }
}