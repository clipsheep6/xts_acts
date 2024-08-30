import { missionManager } from '@kit.AbilityKit';

const TAG: string = "missionmanagerwingmanpage -----> "

@Entry
@Component
struct Index {
  @State message: string = 'com.ohos.missionmanagerwingman';
  getMissionInfos = async (): Promise<missionManager.MissionInfo[]> => {
    return await missionManager.getMissionInfos('', 100);
  }

  async aboutToAppear() {
    try {
      let selfMissionID = (await this.getMissionInfos()).filter((item) => {
        return item.want.bundleName === "com.ohos.missionmanagerwingman"
      })[0].missionId;
      console.log(TAG, "selfMissionID: ", selfMissionID);
      await missionManager.clearMission(selfMissionID)
      console.log(TAG, `clearMission(${selfMissionID}) successfully`);
    } catch (e) {
      console.error(TAG + `aboutToAppear() failed: ${JSON.stringify(e)}`);
    }
  }

  build() {
    RelativeContainer() {
      Text(this.message)
        .id('HelloWorld')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
        .alignRules({
          center: { anchor: '__container__', align: VerticalAlign.Center },
          middle: { anchor: '__container__', align: HorizontalAlign.Center }
        })
    }
    .height('100%')
    .width('100%')
  }
}