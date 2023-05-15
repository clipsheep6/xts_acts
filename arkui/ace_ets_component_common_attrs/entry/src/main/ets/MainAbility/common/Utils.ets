import router from '@ohos.router';

export default class Utils {
  public static instance;

  static sleep(time) {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve(0)
      }, time)
    }).then(() => {
      console.info(`sleep ${time} over...`)
    })
  }

  static getStringFromFile(fileName): Promise<string> {
    return globalThis.abilityContext
      .resourceManager
      .getRawFileContent(fileName)
      .then(data => {
        return new Promise((resolve, reject) => {
          if (data) {
            resolve(String.fromCharCode.apply(null, data))
          } else {
            reject("")
          }
        })
      })
  }

  static async pushPage(obj) {
    try {
      let pages = router.getState();
      console.info("get " + obj.pageName + " state pages: " + JSON.stringify(pages));
      if (!(obj.pageName == pages.name)) {
        console.info("get " + obj.pageName + " state pages.name:" + JSON.stringify(pages.name));
        let result = await router.pushUrl({
          url: obj.pageUrl,
          params: {
            view: obj
          }
        });
        await Utils.sleep(2000);
        console.info("push " + obj.pageName + " page result:" + JSON.stringify(result));
      }
    } catch (err) {
      console.error("push " + obj.pageName + " page error:" + err);
    }
  }

  static async back() {
    if (!("Index" == router.getState().name)) {
      router.back()
    }
    await Utils.sleep(1000);
    router.clear();
  }

  static getComponentRect(key) {
    let strJson = getInspectorByKey(key);
    let obj = JSON.parse(strJson);
    console.info("[getInspectorByKey] key is: " + key);
    console.info("[getInspectorByKey] current component obj is: " + JSON.stringify(obj));
    let rectInfo = JSON.parse('[' + obj.$rect + ']');
    let rect_value = {
      "left": JSON.parse('[' + rectInfo[0] + ']')[0],
      "top": JSON.parse('[' + rectInfo[0] + ']')[1],
      "right": JSON.parse('[' + rectInfo[1] + ']')[0],
      "bottom": JSON.parse('[' + rectInfo[1] + ']')[1]
    };
    console.info(JSON.stringify(rect_value));
    return rect_value;
  }

  static getComponentByKey(componentKey) {
    let strJson = getInspectorByKey(componentKey);
    let obj = JSON.parse(strJson);
    console.info('[' + componentKey + '] obj is: ' + JSON.stringify(obj));
    return obj;
  }

  static getRectHorizontalCenterX(rect) {
    (rect.right - rect.left) / 2 + rect.left;
  }

  static getRectVerticalCenterY(rect) {
    (rect.bottom - rect.top) / 2 + rect.top;
  }
}




