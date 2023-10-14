import Extension from '@ohos.application.DataShareExtensionAbility';
import commonEvent from '@ohos.commonEvent'

function PublishCallBack() {
    console.debug("====>Publish CallBack ACTS_Start_CommonEvent====>");
}
export default class DataShareExtAbility extends Extension {

    // 重写onCreate接口
    onCreate(want, callback) {
        console.info('DataShareExtAbility onCreate');
        commonEvent.publish("ACTS_CreateDataShareHelper_CommonEvent", PublishCallBack);
        
    }

    // 重写query接口
    query(uri, predicates, columns, callback) {

    }
    // 可根据应用需求，选择性重写各个接口
};