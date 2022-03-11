import commonEvent from '@ohos.commonEvent';
export default {
    onCreate() {
        console.info("Application onCreate");
        commonEvent.publish("Ability4_onCreate", () => {
            console.log("Ability4_onCreate Publish success");
        });
    },
    onDestroy() {
        console.info("Application onDestroy");
    }
};
