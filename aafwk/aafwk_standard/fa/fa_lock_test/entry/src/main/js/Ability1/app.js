import commonEvent from '@ohos.commonEvent';
export default {
    onCreate() {
        console.info("Application onCreate");
        commonEvent.publish("Ability1_onCreate", () => {
            console.log("Ability1_onCreate Publish success");
        });
    },
    onDestroy() {
        console.info("Application onDestroy");
    }
};
