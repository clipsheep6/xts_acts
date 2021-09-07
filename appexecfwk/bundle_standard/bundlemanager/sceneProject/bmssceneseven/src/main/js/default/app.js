import featureAbility from '@ohos.ability.featureability'
export default {
    onCreate() {
        console.info('AceApplication onCreate');
        featureAbility.getContext().then(data=>{
            data.onRequestPermissionsFromUserResult(
                (err, data) => {
                    console.log("onRequestPermissionsFromUserResult asyncCallback");
                    console.log("requestCode : " + data.requestCode);
                    for(var j = 0; j < data.permissions.length; j++) {
                        console.log("permissions : " + data.permissions[j]);
                    }
                    for(var j = 0; j < data.grantResults.length; j++) {
                        console.log("grantResults : " + data.grantResults[j]);
                    }
                }
            );
        })
    },
    onDestroy() {
        console.info('AceApplication onDestroy');
    }
};
