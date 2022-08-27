import router from '@system.router'
import featureAbility from '@ohos.ability.featureAbility';

export default {
    data: {
        title: ""
    },

    onInit() {
        this.grantPermission();
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    grantPermission() {
        console.info('Calc[IndexPage] grantPermission')
        let context = featureAbility.getContext()
        context.requestPermissionsFromUser(['ohos.permission.DISTRIBUTED_DATASYNC'], 666, function (result) {
            console.info('Calc[IndexPage] grantPermission,requestPermissionsFromUser,'+result.requestCode)

        })
    },

}


