import data_preferences from '@ohos.data.preferences';


class FirstDialog{
  @State StepTips: string = ''
  async aboutToAppear(){
    let context =null;
    context = globalThis.getContext();
    let preferences;
    try{
      let promise = data_preferences.getPreferences(context,'mystore');
      await promise.then((object) => {
        preferences = object;
      }).catch((err) => {
      })
    }
    catch(err){
    }
    try {
      let promise = preferences.has('test');
      await promise.then((val) => {
        if (val) {
          console.info("The key 'test' is contained.");
        } else {
          console.info("The key 'test' dose not contain.");
        }
      }).catch((err) => {
        console.info("Failed to check the key 'test'. code =" + err.code + ", message =" + err.message);
      })
    } catch(err) {
      await preferences.put('test', 0 , function (err) {
        if (err) {
          console.info("Failed to put value of 'startup'. code =" + err.code + ", message =" + err.message);
          return;
        }
        console.info("Succeeded in putting value of 'test'.");
      })
    }

    let Test = 0;
    let promise = preferences.get('test', 0);
    await promise.then((data) => {
      Test = data;
      console.info("Succeeded in getting value of 'startup'. Data: " + data);
    }).catch((err) => {
      console.info("Failed to get value of 'startup'. code =" + err.code + ", message =" + err.message);
    })

    if(Test != 1) {
      AlertDialog.show(
        {
          title: '操作提示',
          message: this.StepTips,
          primaryButton: {
            value: '不再提醒',fontColor:Color.Grey,
            action: () => {
              try {
                let promise = preferences.put('test', 1);
                promise.then(() => {
                  console.info("Succeeded in putting value of 'test'.");
                }).catch((err) => {
                  console.info("Failed to put value of 'test'. code =" + err.code +", message =" + err.message);
                })
              } catch(err) {
                console.info("Failed to put value of 'test'. code =" + err.code +", message =" + err.message);
              }
              try {
                let promise = preferences.flush();
                promise.then(() => {
                  console.info("Succeeded in flushing.");
                }).catch((err) => {
                  console.info("Failed to flush. code =" + err.code + ", message =" + err.message);
                })
              } catch (err) {
                console.info("Failed to flush. code =" + err.code + ", message =" + err.message);
              }
            }
          },
          secondaryButton: {
            value: '我已知晓',
            action: () => {

            }
          },
          cancel: () => {

          }
        }
      )
    }
    return
  }
  async FlushTest(){
    let preferences;
    try {
      let promise = preferences.put('test', 1);
      promise.then(() => {
        console.info("Succeeded in putting value of 'test'.");
      }).catch((err) => {
        console.info("Failed to put value of 'test'. code =" + err.code +", message =" + err.message);
      })
    } catch(err) {
      console.info("Failed to put value of 'test'. code =" + err.code +", message =" + err.message);
    }
    try {
      let promise = preferences.flush();
      promise.then(() => {
        console.info("Succeeded in flushing.");
      }).catch((err) => {
        console.info("Failed to flush. code =" + err.code + ", message =" + err.message);
      })
    } catch (err) {
      console.info("Failed to flush. code =" + err.code + ", message =" + err.message);
    }
  }
}
export default new FirstDialog()