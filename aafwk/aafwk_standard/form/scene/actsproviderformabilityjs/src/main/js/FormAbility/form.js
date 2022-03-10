import formManager from '@ohos.ability.formManager';
import formBindingData from '@ohos.application.formBindingData';

export default {
    onCreate(want) {
        console.info('FormAbility onCreate, want:' + JSON.stringify(want));
        let obj = {
            "temperature": "11°",
            "time": "11:00",
            "test": 11,
            "test3": true
        };
        let formBindingDataObj = formBindingData.createFormBindingData(obj);
        return formBindingDataObj;
    },
    onUpdate(formId) {
        console.info('FormAbility onUpdate, formId: ' + formId);
        formManager.updateForm(formId, {"data" : {"temperature": "18°",
            "time": "12:00",
            "test": 12,
            "test3": false}});
    },
    onCastToNormal(formId) {
        console.info('FormAbility onCastTemp, formId: ' + formId);
    },
    onEvent(formId, message) {
        console.info('FormAbility onEvent, formId: ' + formId + 'message: ' + message);
        let dataObj1 = {
            "temperature": "14°",
            "time": "12:00",
            "test": 11,
            "test3": true
        };
        let obj1 = formBindingData.createFormBindingData(JSON.stringify(dataObj1));
        formManager.updateForm(formId, obj1)
            .then((data) => {
                console.log('FormAbility deleteForm, data:' + data);
            }).catch((error) => {
            console.error('Operation failed. Cause: ' + error);
        });
    },
    onVisibilityChange(formEvents) {
        console.info('FormAbility onVisibilityChange, ' + JSON.stringify(formEvents));
    },
    onDestroy(formId) {
        console.info('FormAbility onDestroy, formId: ' + formId);
    }
};