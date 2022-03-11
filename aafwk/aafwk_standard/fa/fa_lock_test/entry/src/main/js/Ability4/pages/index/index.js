import commonEvent from '@ohos.commonEvent';
import router from '@system.router'

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow(){
        console.info('Ability4 onShow');
        commonEvent.publish("Ability4_onShow", () => {
            console.log("Ability4_onShow Publish success");
        });
    }


}



